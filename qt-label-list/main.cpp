#include <QtGui>
#include <QApplication>
#include <QLabel>
#include <QGridLayout>
#include <QString>

int main(int argc, char **argv) {

 QApplication app(argc, argv);
 QWidget *window = new QWidget;

 QGridLayout *layout = new QGridLayout;
 QLabel* elem[15][2];

 int i = 0;
 QString msg = QString ("Loading %1").arg(i);
 qDebug(qPrintable(msg));

 for(int row=0; row<15; row++)
  for(int col=0; col<2; col++)
  {
    QString foo = QString("This is row %1 col %2");
    qDebug(qPrintable(foo));
    foo = foo.arg(row).arg(col);
    qDebug(qPrintable(foo));
    elem[row][col] = new QLabel(foo);
    qDebug(qPrintable(elem[row][col]->text()));
    layout->addWidget(elem[row][col], row, col);
  }

 window->setLayout(layout);

 window->show();

 return app.exec();

}
