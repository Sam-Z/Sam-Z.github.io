#include<QApplication>
#include<QWidget>
#include<demo_ui.h>

class Demo:public QWidget, public Ui::Form{
public:   
    Demo(QWidget *w)
    {
        setupUi(this);
    }
};

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    Demo demo(NULL);
    demo.show();
    
    app.exec();

}
