#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "card.h"
#include "game.h"
#include <QPixmap>
#include <QTimer>
#include <QPushButton>
#include <QStackedWidget>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void startPressed();

private:

    //holds the screens
    QStackedWidget* stack;

    //start button
    QPushButton* start;

    //second screen with a game on it
    Game* game;

    QTimer timer;
};
#endif // MAINWINDOW_H
