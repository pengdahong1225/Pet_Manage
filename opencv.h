#ifndef OLD_VIDEO_H
#define OLD_VIDEO_H

#include<QObject>
#include<opencv2/opencv.hpp>
class Old_video : public QObject
{
    Q_OBJECT
public:
    Old_video(QString& filename);
    ~Old_video();
private:

};

#endif // OLD_VIDEO_H
