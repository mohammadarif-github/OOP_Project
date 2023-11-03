#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMessageBox>
#include <QMainWindow>
#include <QDebug>
#include <QVector>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_login_button_clicked();

    void on_signup_button_clicked();

    void on_pushButton_12_clicked();


    void on_second_movie_select_clicked();

    void on_first_movie_select_clicked();

    void on_third_movie_select_clicked();

    void on_back_to_movie_page_clicked();

    void on_back_to_food_page_clicked();

    void on_back_to_seat_booking_page_clicked();

    void on_move_to_payment_page_clicked();

    void on_seat_1_clicked();

    void on_seat_2_clicked();

    void on_seat_3_clicked();

    void on_seat_4_clicked();

    void on_seat_5_clicked();

    void on_seat_6_clicked();

    void on_seat_7_clicked();

    void on_seat_8_clicked();

    void on_seat_9_clicked();

    void on_seat_25_clicked();

    void on_seat_26_clicked();

    void on_seat_27_clicked();

    void on_seat_10_clicked();

    void on_seat_11_clicked();

    void on_seat_12_clicked();

    void on_seat_13_clicked();

    void on_seat_14_clicked();

    void on_seat_15_clicked();

    void on_seat_16_clicked();

    void on_seat_17_clicked();

    void on_seat_18_clicked();

    void on_seat_19_clicked();

    void on_seat_20_clicked();

    void on_seat_21_clicked();

    void on_seat_22_clicked();

    void on_seat_23_clicked();

    void on_seat_24_clicked();

    void on_seat_sp_1_clicked();

    void on_seat_sp_2_clicked();

    void on_seat_sp_3_clicked();

    void on_seat_sp_4_clicked();

    void on_seat_sp_5_clicked();

    void on_seat_sp_6_clicked();

    void on_seat_sp_7_clicked();

    void on_seat_sp_8_clicked();

    void on_seat_sp_9_clicked();

    void on_seat_sp_10_clicked();

    void on_seat_sp_11_clicked();

    void on_seat_sp_12_clicked();

    void on_seat_sp_13_clicked();

    void on_seat_sp_14_clicked();

    void on_seat_sp_15_clicked();

    void on_seat_sp_16_clicked();

    void on_seat_sp_17_clicked();

    void on_seat_sp_18_clicked();

    void on_pop_corn_regular_clicked();

    void on_pop_corn_premium_clicked();

    void on_sprite_clicked();

    void on_seven_up_clicked();

    void on_pepsi_clicked();

    void on_mountain_dew_clicked();

    void on_coca_cola_clicked();

    void on_rc_cola_clicked();

    void on_chicken_wings_clicked();

    void on_french_fries_clicked();

    void on_chicken_burger_clicked();

    void on_move_to_checkout_clicked();

private:
    Ui::MainWindow *ui;
    QString login_email;
    QString login_pass;
    QString signup_email;
    QString signup_pass;

    int regular_seat = 0 ;
    int sp_seat = 0 ;
    int total_regular = 0;
    int total_premium = 0;
    int food_cost = 50;
    int total = 0;
    int popcorn = 0;
    int cold_drinks = 0;
    int burger = 0;
    int fries = 0;
    int wings = 0;

//    QString total = "100" ;

    QVector<int>seatcheck;

};
#endif // MAINWINDOW_H
