#include "tmedia.h"

Tmedia::Tmedia(QObject *parent)
    : QObject{parent}
    , player(new QMediaPlayer(this))
{

}

Tmedia::~Tmedia()
{
    delete player;
}

void Tmedia::play_record(const QString &record_name)
{
    player->setMedia(QUrl::fromLocalFile(record_name));
    player->play();
    qDebug() << player->errorString();
}

void Tmedia::stop_record()
{
    player->stop();
}
