#include <QtGui>
#include <QApplication>
#include <QLabel>
#include <QHBoxLayout>
#include <QStringList>
#include <QList>


int main(int argc, char **argv) {
 QApplication app(argc, argv);

 QWidget *window = new QWidget;
 QList<QString> elem;

 int i;
 for (i=0; i<5; i++) {
  elem << "Spirit" << "Air" << "Fire" << "Water" << "Easrth";
 }


 QLabel label(elem);

 QHBoxLayout *hlayout = new QHBoxLayout;
 hlayout->addWidget(label);


 return app.exec();
}

