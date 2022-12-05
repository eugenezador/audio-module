#include "pleer.h"
#include "ui_pleer.h"

Pleer::Pleer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Pleer)
    , player(new Tmedia(this))
{
    ui->setupUi(this);

    ui->list->addItem("material 1");
    ui->list->addItem("material 2");
    ui->list->addItem("material 3");
    ui->list->addItem("material 4");

    connect(this, &Pleer::play_record, player, &Tmedia::play_record);
    connect(this, &Pleer::stop_record, player, &Tmedia::stop_record);
}

Pleer::~Pleer()
{
    delete ui;
    delete player;
}


void Pleer::on_list_currentTextChanged(const QString &arg1)
{

    if(arg1 == "material 1") record_name = "/home/eugene/Downloads/Рингтон - Мелодия iPhone 12.mp3";
    if(arg1 == "material 2") record_name = "/home/eugene/Downloads/Рингтон - Рум-пум-пум.mp3";
    if(arg1 == "material 3") record_name = "/home/eugene/Downloads/Рингтон - Ритмы хауса.mp3";
    if(arg1 == "material 4") record_name = "/home/eugene/Downloads/mihail_shufutinskiy_-_sharfik_muzati.net.mp3";
}


void Pleer::on_play_clicked()
{
    emit play_record(record_name);

}


void Pleer::on_stop_clicked()
{
    emit stop_record();
}

