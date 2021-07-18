#include "video.h"
#include<QImage>
#include<QBuffer>
#include<QStack>
#include<QDebug>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
UdpThread::UdpThread(QObject *parent):QThread (parent)
{
    m_udpSocket = new QUdpSocket(this);
    m_udpSocket->bind(QHostAddress("192.168.101.9"),45454);
    connect(m_udpSocket,&QUdpSocket::readyRead,this,&UdpThread::processPendingDatagram);
    is_videoclose = false;
    first_revice = true;
}

UdpThread::~UdpThread()
{
    delete m_udpSocket;
    qDebug()<<"析构";
}
void UdpThread::run()  //run()函数结束后发出 finished信号，代表线程执行结束
{
    while(1){
        sleep(1);   //单位 s
        if(is_videoclose == true)
        {
            break;
        }
    }
}
void UdpThread::processPendingDatagram()//调用一次接收一次
{
    QByteArray datagram;
    QBuffer buffer(&datagram);
    buffer.open(QIODevice::ReadWrite);
    int value_size = static_cast<int>(this->m_udpSocket->pendingDatagramSize());
    datagram.resize(value_size);
    m_udpSocket->readDatagram(datagram.data(),datagram.size());
    //没分片
    if(value_size < 50000 && vec_array.empty())
    {
        QByteArray decryptedByte = QByteArray::fromBase64(datagram.data());
        to_image.loadFromData(decryptedByte);
        if(!to_image.isNull())
        {
            emit recevie_success(to_image);
            this->Save_Video(to_image);
        }
    }
    else {
        //分了片
        vec_array.push_back(datagram);
        if(vec_array.size()==2)
        {
            /*粘包*/
            QByteArray All_data = Combine_piece();
            QByteArray decryptedByte = QByteArray::fromBase64(All_data.data());
            QString data = decryptedByte;
            to_image.loadFromData(decryptedByte);
            if(!to_image.isNull())
            {
                emit recevie_success(to_image);
                this->Save_Video(to_image);
            }
            vec_array.clear();
        }
    }
}
QByteArray UdpThread::Combine_piece()
{
    QByteArray All_data = vec_array[0] + vec_array[1];
    return All_data;
}

void UdpThread::Save_Video(QImage image)
{
    cv::Mat dst ;
    cv::cvtColor(dst, dst, cv::COLOR_BGR2RGB);
    qDebug()<<"cccc";
    dst = cv::Mat(image.height(), image.width(), CV_8UC3,
                  (uchar*)image.bits(), size_t(image.bytesPerLine()));
    qDebug()<<"aaa";
    if(first_revice)//只初始化一次
    {
        qDebug()<<"bbb";
        writer = new cv::VideoWriter("../video/video1.avi",cv::VideoWriter::fourcc('M', 'J', 'P', 'G'),
                                     10,cv::Size(dst.cols,dst.rows),1);
        first_revice = false;
    }
    writer->write(dst);
}

void UdpThread::close_slots()
{
    is_videoclose = true;
}
