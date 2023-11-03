#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_login_button_clicked()
{
    login_email = ui->login_email->text();
    login_pass = ui->login_pass->text();

    if(login_email == "arif@gmail.com" && login_pass == "arif")
    {
        ui->stackedWidget->setCurrentIndex(2);
    }
    else
    {
        QMessageBox::warning(this, "LOGIN" ," Wrong Email or Password !! ");
    }
    ui->login_email->clear();
    ui->login_pass->clear();
}


void MainWindow::on_signup_button_clicked()
{
    signup_email = ui->signup_email->text();
    signup_pass = ui->signup_pass->text();
    if (signup_email.isEmpty() || signup_pass.isEmpty()) {
        QMessageBox::warning(this, "Signup", "Invalid Email or Password!!");
    }
    else
    {
        QMessageBox::information(this, "Signup", "Signup Successful!");
    }

    ui->signup_email->clear();
    ui->signup_pass->clear();
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_second_movie_select_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_first_movie_select_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}



void MainWindow::on_third_movie_select_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_back_to_movie_page_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}



//void MainWindow::on_textEdit()
//{
//    ui->textEdit->setText(totalText);
//}

//QString totalText = "Your total Payment is: " + QString::number(total); // Convert the numeric value to a QString
//ui->textEdit_total->setText(totalText);
void MainWindow::on_back_to_food_page_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_back_to_seat_booking_page_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_move_to_payment_page_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
//    qDebug() << "food_cost: " << food_cost;
//    qDebug() << "total: " << total;
//    qDebug() << "regular_seat_payment: " << total_regular;
//    qDebug() << "premium_seat_payment: " << total_premium;

    QString regular_seat_payment = "Regular Seat Booked : " + QString::number(regular_seat);
    QString premium_seat_payment = "Premium Seat Booked: " + QString::number(sp_seat);
    total = total_regular+total_premium;
    QString total_payment = "Your Total Bill is  : " + QString::number(total);

    if(popcorn != 0)
    {
        QString pop_corn = "<span style=\"font-size: 16pt; font-weight: bold; color: white;\">Popcorn : " + QString::number(popcorn) + "</span>";
        ui->food_bill->append(pop_corn);
    }
    if(cold_drinks != 0)
    {
        QString colddrinks = "<span style=\"font-size: 16pt; font-weight: bold; color: white;\">Cold drinks : " + QString::number(cold_drinks) + "</span>";
        ui->food_bill->append(colddrinks);
    }
    if(wings != 0)
    {
        QString ck_wings = "<span style=\"font-size: 16pt; font-weight: bold; color: white;\">Chicken Wings : " + QString::number(wings) + "</span>";
        ui->food_bill->append(ck_wings);
    }
    if(burger != 0)
    {
        QString bur_ger = "<span style=\"font-size: 16pt; font-weight: bold; color: white;\">Burger : " + QString::number(burger) + "</span>";
        ui->food_bill->append(bur_ger);
    }
    if(fries != 0)
    {
        QString fr_fries = "<span style=\"font-size: 16pt; font-weight: bold; color: white;\">French Fries : " + QString::number(fries) + "</span>";
        ui->food_bill->append(fr_fries);
    }

    QString styledText = QString("<span style=\"font-size: 18pt; font-weight: bold; color: white;\">%1</span>").arg(regular_seat_payment);
    ui->textEdit->append(styledText);

    QString styledText_1 = QString("<span style=\"font-size: 18pt; font-weight: bold; color: white;\">%1</span>").arg(premium_seat_payment);
    ui->textEdit->append(styledText_1);


    QString final_bills = QString("<div align=\"center\"><span style=\"font-size: 22pt; font-weight: bold; color: white;\">%1</span></div>").arg(total_payment);
    ui->final_bill->setText(final_bills);
}


void MainWindow::on_seat_1_clicked()
{
    ui->seat_1->setStyleSheet("background-color: rgb(100, 100, 100)");
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_1->setDisabled(true);
}


void MainWindow::on_seat_2_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_2->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_2->setDisabled(true);
}


void MainWindow::on_seat_3_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_3->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_3->setDisabled(true);
}


void MainWindow::on_seat_4_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_4->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_4->setDisabled(true);
}


void MainWindow::on_seat_5_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_5->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_5->setDisabled(true);
}


void MainWindow::on_seat_6_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_6->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_6->setDisabled(true);
}


void MainWindow::on_seat_7_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_7->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_7->setDisabled(true);
}


void MainWindow::on_seat_8_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_8->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_8->setDisabled(true);
}


void MainWindow::on_seat_9_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_9->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_9->setDisabled(true);
}


void MainWindow::on_seat_25_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_25->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_25->setDisabled(true);
}


void MainWindow::on_seat_26_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_26->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_26->setDisabled(true);
}


void MainWindow::on_seat_27_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_27->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_27->setDisabled(true);
}


void MainWindow::on_seat_10_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_10->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_10->setDisabled(true);
}


void MainWindow::on_seat_11_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_11->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_11->setDisabled(true);
}


void MainWindow::on_seat_12_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_12->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_12->setDisabled(true);
}


void MainWindow::on_seat_13_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_13->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_13->setDisabled(true);
}


void MainWindow::on_seat_14_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_14->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_14->setDisabled(true);
}


void MainWindow::on_seat_15_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_15->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_15->setDisabled(true);
}


void MainWindow::on_seat_16_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_16->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_16->setDisabled(true);
}


void MainWindow::on_seat_17_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_17->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_17->setDisabled(true);
}


void MainWindow::on_seat_18_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_18->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_18->setDisabled(true);
}


void MainWindow::on_seat_19_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_19->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_19->setDisabled(true);
}


void MainWindow::on_seat_20_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_20->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_20->setDisabled(true);
}


void MainWindow::on_seat_21_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_21->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_21->setDisabled(true);
}


void MainWindow::on_seat_22_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_22->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_22->setDisabled(true);
}


void MainWindow::on_seat_23_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_23->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_23->setDisabled(true);
}


void MainWindow::on_seat_24_clicked()
{
    regular_seat+=1;
    total_regular = 200 * regular_seat;
    ui->seat_24->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_24->setDisabled(true);
}


void MainWindow::on_seat_sp_1_clicked()
{
    sp_seat+=1;
    total_premium = 350 * sp_seat;
    ui->seat_sp_1->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_sp_1->setDisabled(true);
}


void MainWindow::on_seat_sp_2_clicked()
{
    sp_seat+=1;
    total_premium = 350 * sp_seat;
    ui->seat_sp_2->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_sp_2->setDisabled(true);
}


void MainWindow::on_seat_sp_3_clicked()
{
    sp_seat+=1;
    total_premium = 350 * sp_seat;
    ui->seat_sp_3->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_sp_3->setDisabled(true);
}


void MainWindow::on_seat_sp_4_clicked()
{
    sp_seat+=1;
    total_premium = 350 * sp_seat;
    ui->seat_sp_4->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_sp_4->setDisabled(true);
}


void MainWindow::on_seat_sp_5_clicked()
{
    sp_seat+=1;
    total_premium = 350 * sp_seat;
    ui->seat_sp_5->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_sp_5->setDisabled(true);
}


void MainWindow::on_seat_sp_6_clicked()
{
    sp_seat+=1;
    total_premium = 350 * sp_seat;
    ui->seat_sp_6->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_sp_6->setDisabled(true);
}


void MainWindow::on_seat_sp_7_clicked()
{
    sp_seat+=1;
    total_premium = 350 * sp_seat;
    ui->seat_sp_7->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_sp_7->setDisabled(true);
}


void MainWindow::on_seat_sp_8_clicked()
{
    sp_seat+=1;
    total_premium = 350 * sp_seat;
    ui->seat_sp_8->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_sp_8->setDisabled(true);
}


void MainWindow::on_seat_sp_9_clicked()
{
    sp_seat+=1;
    total_premium = 350 * sp_seat;
    ui->seat_sp_9->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_sp_9->setDisabled(true);
}


void MainWindow::on_seat_sp_10_clicked()
{
    sp_seat+=1;
    total_premium = 350 * sp_seat;
    ui->seat_sp_10->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_sp_10->setDisabled(true);
}


void MainWindow::on_seat_sp_11_clicked()
{
    sp_seat+=1;
    total_premium = 350 * sp_seat;
    ui->seat_sp_11->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_sp_11->setDisabled(true);
}


void MainWindow::on_seat_sp_12_clicked()
{
    sp_seat+=1;
    total_premium = 350 * sp_seat;
    ui->seat_sp_12->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_sp_12->setDisabled(true);
}


void MainWindow::on_seat_sp_13_clicked()
{
    sp_seat+=1;
    total_premium = 350 * sp_seat;
    ui->seat_sp_13->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_sp_13->setDisabled(true);
}


void MainWindow::on_seat_sp_14_clicked()
{
    sp_seat+=1;
    total_premium = 350 * sp_seat;
    ui->seat_sp_14->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_sp_14->setDisabled(true);
}


void MainWindow::on_seat_sp_15_clicked()
{
    sp_seat+=1;
    total_premium = 350 * sp_seat;
    ui->seat_sp_15->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_sp_15->setDisabled(true);
}


void MainWindow::on_seat_sp_16_clicked()
{
    sp_seat+=1;
    total_premium = 350 * sp_seat;
    ui->seat_sp_16->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_sp_16->setDisabled(true);
}


void MainWindow::on_seat_sp_17_clicked()
{
    sp_seat+=1;
    total_premium = 350 * sp_seat;
    ui->seat_sp_17->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_sp_17->setDisabled(true);
}


void MainWindow::on_seat_sp_18_clicked()
{
    sp_seat+=1;
    total_premium = 350 * sp_seat;
    ui->seat_sp_18->setStyleSheet("background-color: rgb(100, 100, 100)");
    ui->seat_sp_18->setDisabled(true);
}


void MainWindow::on_pop_corn_regular_clicked()
{
    food_cost += 120;
    popcorn += 120;
}


void MainWindow::on_pop_corn_premium_clicked()
{
    food_cost += 200;
    popcorn += 200;
}


void MainWindow::on_sprite_clicked()
{
    food_cost += 30;
    cold_drinks +=30;
}


void MainWindow::on_seven_up_clicked()
{
    food_cost += 35;
    cold_drinks +=35;
}


void MainWindow::on_pepsi_clicked()
{
    food_cost += 30;
    cold_drinks +=30;
}


void MainWindow::on_mountain_dew_clicked()
{
    food_cost += 35;
    cold_drinks +=35;
}


void MainWindow::on_coca_cola_clicked()
{
    food_cost += 35;
    cold_drinks +=35;
}


void MainWindow::on_rc_cola_clicked()
{
    food_cost += 25;
    cold_drinks +=25;
}


void MainWindow::on_chicken_wings_clicked()
{
    food_cost += 200;
    wings +=30;
}


void MainWindow::on_french_fries_clicked()
{
    food_cost += 200;
    fries +=30;
}


void MainWindow::on_chicken_burger_clicked()
{
    food_cost += 200;
    burger +=220;
}


void MainWindow::on_move_to_checkout_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

