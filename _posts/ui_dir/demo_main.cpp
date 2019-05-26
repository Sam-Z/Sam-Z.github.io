#include<QApplication>
#include<QWidget>
#include<demo_ui.h>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QWidget w(NULL);
    Ui::Form form;
    form.setupUi(&w);
    w.show();
    app.exec();
