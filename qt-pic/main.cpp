#include <QtGui>
#include <QApplication>
#include <QLabel>

int main(int argc, char **argv) {

 QApplication app(argc, argv);

 QObject *parent;
 QString program = "astrolog";
 QStringList arguments;
 QProcess *myProcess = new QProcess(parent);
 myProcess->start(program, arguments);

 QPixmap chart("/tmp/astro.log");

 QLabel label;
 label.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
 label.setStyleSheet("background-color: dimgray");
 label.setPixmap(chart);
 label.showMaximized();

 return app.exec();

}
