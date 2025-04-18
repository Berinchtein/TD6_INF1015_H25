#ifndef ECHEQUIERWINDOW_HPP
#define ECHEQUIERWINDOW_HPP

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class EchequierWindow;
}
QT_END_NAMESPACE

class EchequierWindow : public QMainWindow
{
    Q_OBJECT

public:
    EchequierWindow(QWidget *parent = nullptr);
    ~EchequierWindow();

private:
    Ui::EchequierWindow *ui;
};
#endif // ECHEQUIERWINDOW_HPP
