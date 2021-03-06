#include <QtGui>
#include <QApplication>
#include <QLabel>
#include <QGridLayout>
#include <QString>

int main(int argc, char **argv) {

 QApplication app(argc, argv);
 QWidget *window = new QWidget;
 window->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
 window->setStyleSheet("background-color: dimgray");
 window->showMaximized();

 QGridLayout *layout = new QGridLayout;
 QLabel* elem[15][2];

 int i = 0;
 QString msg = QString ("Loading %1").arg(i);

 QFont f( "Arial", 12, QFont::Bold);

 for(int row=0; row<15; row++)
  for(int col=0; col<2; col++)
  {
    elem[row][col] = new QLabel();
    switch(row) {
      case  0:
      case  5:
      case 10: elem[row][col]->setText("Spirit");
        elem[row][col]->setStyleSheet("color: black; background-color: dimgray");
        break;
      case  1:
      case  6:
      case 11: elem[row][col]->setText("Air");
        elem[row][col]->setStyleSheet("color: gold; background-color: dimgray");
        break;
      case  2:
      case  7:
      case 12: elem[row][col]->setText("Fire");
        elem[row][col]->setStyleSheet("color: darkred; background-color: dimgray");
        break;
      case  3:
      case  8:
      case 13: elem[row][col]->setText("Water");
        elem[row][col]->setStyleSheet("color: blue; background-color: dimgray");
        break;
      case  4:
      case  9:
      case 14: elem[row][col]->setText("Earth");
        elem[row][col]->setStyleSheet("color: lawngreen; background-color: dimgray");
        break;
      default : elem[row][col]->setText("Barf");
    } 

    elem[row][col]->setFont(f);
    layout->addWidget(elem[row][col], row, col);

  }

 window->setLayout(layout);

 window->show();

 return app.exec();

}
