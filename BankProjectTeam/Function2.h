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