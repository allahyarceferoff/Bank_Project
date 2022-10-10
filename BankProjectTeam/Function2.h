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

