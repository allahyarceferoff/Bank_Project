#pragma once
#include<iostream>
using namespace std;
#include"Entities.h"

int totaldebt = 0;
void GetTotalDebt(Debtor** debtors) {  

	for (size_t i = 0; i < 3; i++)
	{
		totaldebt = debtors[i]->debt + debtors[i + 1]->debt;
	}
}



int totalbud = 0;
void GetTotalBudget(Debtor** debtors) {   

	totalbud = 10000000 - totaldebt;
}


void ShowDebtors(Debtor** debtors) {   
	system("cls");
	cout << "DEBTORS INFORMATION" << endl << endl;
	for (size_t i = 0; i < 3; i++)
	{
		cout << "Debtor's name : " << debtors[i]->name << endl;
		cout << "Debtor's surname : " << debtors[i]->surname << endl;
		cout << "Debtor's id : " << debtors[i]->id << endl;
		cout << "Debtor's debt : " << debtors[i]->debt << endl;
		cout << "Debtor's payment : " << debtors[i]->payment << endl;
		cout << endl;
	}
}


void GetDebtorPayment(Debtor** debtors) {   
	ShowDebtors(debtors);
	int selectdebt = 0;
	cout << "Enter debtor's id : ";
	cin >> selectdebt;
	bool isChecking = false;
	for (size_t i = 0; i < 3; i++)
	{
		if (selectdebt == debtors[i]->id) {
			cout << "Debtor's payment : " << debtors[i]->payment << endl;
			isChecking = false;
			break;
		}
		else {
			isChecking = true;
		}
	}
	if (isChecking) {
		cout << "You have enter incorrect id !!!" << endl;
	}
}
