#include <QtGui>
#include <QApplication>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>

int main(int argc, char **argv) {

 QApplication app(argc, argv);

 QWidget *window = new QWidget;

 QLabel *label1 = new QLabel("One");
 QLabel *label2 = new QLabel("Two");
 QLabel *label3 = new QLabel("Three");
 QLabel *label4 = new QLabel("Four");
 QLabel *label5 = new QLabel("Five");

 QVBoxLayout *layout = new QVBoxLayout;
 layout->addWidget(label1);
 layout->addWidget(label2);
 layout->addWidget(label3);
 layout->addWidget(label4);
 layout->addWidget(label5);

 QLabel *lbel1 = new QLabel("One");
 QLabel *lbel2 = new QLabel("Two");
 QLabel *lbel3 = new QLabel("Three");
 QLabel *lbel4 = new QLabel("Four");
 QLabel *lbel5 = new QLabel("Five");

 QVBoxLayout *lyout = new QVBoxLayout;
 lyout->addWidget(lbel1);
 lyout->addWidget(lbel2);
 lyout->addWidget(lbel3);
 lyout->addWidget(lbel4);
 lyout->addWidget(lbel5);

 QHBoxLayout *hlayout = new QHBoxLayout;
 hlayout->addLayout(layout);
 hlayout->addLayout(lyout);

 window->setLayout(hlayout);

 window->show();

 return app.exec();
}

