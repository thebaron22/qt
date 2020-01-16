#include <QtGui>
#include <QApplication>
#include <QLabel>
#include <QString>

int main(int argc, char **argv) {
 QApplication app(argc, argv);

 int rise_iyear_utc = 2020;
 int rise_imonth_utc = 1;
 int rise_iday_utc = 16;
 int rise_ihour_utc = 5;
 int rise_imin_utc = 56;
 double rise_dsec_utc = 25;

 QString foo = QString::number(rise_iyear_utc) + " " + QString::number(rise_imonth_utc) + " " + QString::number(rise_iday_utc) + " " + QString::number(rise_ihour_utc) + ":" + QString::number(rise_imin_utc) + ":" + QString::number(rise_dsec_utc);
 QDateTime dateTime = QDateTime::fromString(foo, "yyyy M d H:mm:ss");
 dateTime.setTimeSpec(Qt::UTC);

 QLabel label("datetime: " + dateTime.toLocalTime().toString());
 label.show();

 return app.exec();
}
