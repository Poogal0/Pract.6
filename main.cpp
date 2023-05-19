#include <QtWidgets>

class MainWindow : public QMainWindow {
    public:
        MainWindow();
    private:
        QLabel *textLabel;
};

MainWindow::MainWindow() {
    resize(900,500);
    setWindowTitle("Main win v6.1");
    textLabel = new QLabel(this);
    textLabel->setText("Text QLabel");
    QFont fontLabel("Time", 32, QFont::Bold);
    textLabel->setFont(fontLabel);
    textLabel->setGeometry(0, 0, 800, 300);
}

int main (int argc, char *argv[]) {
    QApplication app (argc, argv);
    MainWindow *mainWin;
    mainWin = new MainWindow(); 
    mainWin->show();
    return app.exec();
}