#ifndef LOGWINDOW_H
#define LOGWINDOW_H

#include <QWidget>


namespace Ui {
class LogWindow;
}

class Logger;

class LogWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LogWindow(QWidget *parent, Logger *logger);
    ~LogWindow();

public slots:
    void onLogMessage(QtMsgType type, const QString &msg);

private:
    Ui::LogWindow *ui;
};

#endif // LOGWINDOW_H
