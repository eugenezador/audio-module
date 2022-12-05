#ifndef PLEER_H
#define PLEER_H

#include <QMainWindow>
#include "tmedia.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Pleer; }
QT_END_NAMESPACE

class Pleer : public QMainWindow
{
    Q_OBJECT

public:
    Pleer(QWidget *parent = nullptr);
    ~Pleer();

private slots:


    void on_list_currentTextChanged(const QString &arg1);

    void on_play_clicked();

    void on_stop_clicked();

signals:
    void play_record(const QString &record_name);

    void stop_record();

private:
    Ui::Pleer *ui;

    Tmedia *player = nullptr;

    QString record_name = "";

};
#endif // PLEER_H
