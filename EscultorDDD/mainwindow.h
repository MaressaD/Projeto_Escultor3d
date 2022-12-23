#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:

signals:
    void getMethod(QString);
private slots:
    void on_buttonPVoxel_clicked(bool checked);
    void on_buttonCVoxel_clicked(bool checked);
    void on_buttonPBox_clicked(bool checked);
    void on_buttonCBox_clicked(bool checked);
    void on_buttonPSphere_clicked(bool checked);
    void on_buttonCSphere_clicked(bool checked);
    void on_buttonPEllipsoid_clicked(bool checked);
    void on_buttonCEllipsoid_clicked(bool checked);
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
