#include<iostream>
#pragma once
using namespace std;
#include"Entities.h"
#include"Function1.h"
#include"Function2.h"
#include<time.h>
#include<Windows.h>



void main() {
    while (true)
    {
        system("cls");
        ShowMenu();
        int select = 0;
        cout << "Enter select : ";
        cin >> select;
        if (select == 1) {                  //Select  = 1 seklinde yazilmisdi
            ShowDebtors(debtors);
            Sleep(5000);
        }
        else if (select == 2) {
            GetDebtorPayment(debtors);
            Sleep(4000);
        }
        else if (select == 3) {
            ShowDebtorDebt(debtors);
            Sleep(4000);
        }
        else if (select == 4) {
            GiveCredit(debtors);
        }
    }
}







