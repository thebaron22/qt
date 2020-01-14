#include <QtGui>
#include <QApplication>
#include <QLabel>

int main(int argc, char **argv) {
 QApplication app(argc, argv);
 QPixmap pixmap(":/images/hermetic.png");
 if (!pixmap)  qWarning("Pixmap is NULL");

 QLabel label("Hello, world!");
 label.show();

 QLabel label2;
 label2.setPixmap(pixmap);
 label2.show();

 return app.exec();
}
