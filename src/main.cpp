#include "./ui/MainWindow.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    auto* main_frame = new Ui::MainFrame();

    main_frame->show();
    return QApplication::exec();
}
