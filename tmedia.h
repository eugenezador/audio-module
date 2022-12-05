#ifndef TMEDIA_H
#define TMEDIA_H

#include <QObject>
#include <QMediaPlayer>

class Tmedia : public QObject
{
    Q_OBJECT
public:
    explicit Tmedia(QObject *parent = nullptr);
    ~Tmedia();

    void play_record(const QString &record_name);

    void stop_record();

    bool is_playing = false;

signals:

private:
    QMediaPlayer *player = nullptr;

};

#endif // TMEDIA_H
