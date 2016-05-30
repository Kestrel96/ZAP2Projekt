#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include<QTimer>
#include<QtWidgets>

#include "wmrowki.h"

#include"menu.h"
#include"mrowka.h"
#include"plansza.h"
#include "lista.h"
#include "global.h"
#include "dialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void paintEvent(QPaintEvent *e);
    void Ustaw();

    
private slots:

    void on_L_mrowek_editingFinished();

    void on_spinBox_2_editingFinished();

    void on_pB_Start_clicked();

    void on_Plansza_X_editingFinished();

    void on_Plansza_Y_editingFinished();

    void on_Losowe_editingFinished();

    void on_Slider_szybkosc_sliderMoved(int position);

    void on_Slider_szybkosc_sliderPressed();

public slots:

private:
    Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H








