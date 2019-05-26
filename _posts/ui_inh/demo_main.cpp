#include<QApplication>
#include<QWidget>
#include<demo_ui.h>

class Demo:public QWidget{
public:   
    Demo(QWidget *w)
    {
        form.setupUi(this);
    }
private:
    Ui::Form form;   
};

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    Demo demo(NULL);
    demo.show();
    
    app.exec();

}
