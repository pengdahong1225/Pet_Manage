#ifndef VIDEO_H
#define VIDEO_H
#include<QThread>
#include<QUdpSocket>
#include<QByteArray>
#include<QImage>
#include<QVector>
class UdpThread : public QThread
{
    Q_OBJECT
public:
    UdpThread(QObject *parent = nullptr);
    ~UdpThread();
    QUdpSocket *m_udpSocket;
    QByteArray Combine_piece();
protected:
    void run();
signals:
    void recevie_success(QImage img);//值传递
public slots:
    void processPendingDatagram(); //bug点 115507
    void close_slots();
private:
    QByteArray m_buf;
    bool is_videoclose;
    QVector<QByteArray> vec_array;
    QImage to_image;
};

#endif // VIDEO_H
