#include <QtWidgets>

class MainWindow : public QMainWindow {
    public:
        MainWindow();

};

MainWindow::MainWindow() {
    resize(900,500);
    setWindowTitle("Main win v6.1");
}

int main (int argc, char *argv[]) {
    QApplication app (argc, argv);
    MainWindow *mainWin;
    mainWin = new MainWindow(); 
    mainWin->show();
    return app.exec();
}
