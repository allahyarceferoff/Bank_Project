#pragma once
#include<iostream>
using namespace std;
#include"Entities.h"
Debtor** debtors = new Debtor * [] {//Allahyar
	new Debtor{ new char[] {"John"},new char[] {"Johnlu"},123, 100000, 7000 },
		new Debtor{ new char[] {"Harry"},new char[] {"Harryli"},234, 120000, 2000 },
		new Debtor{ new char[] {"Jack"},new char[] {"Jones"},345, 1430000, 10000 },

};



Bank** bank = new Bank * [] {//Allahyar
	new Bank{ new char [] {"Kapital Bank"}, 3, totaldebt, totalbud },
};




void ShowMenu() {              //Allahyar
	cout << "============================" << endl;
	cout << "Show all debtors [1] : " << endl;
	cout << "Show any debtor's payment [2] : " << endl;
	cout << "Show any debtor's debt [3] : " << endl;
	cout << "Give credit any debtor [4] : " << endl;
	cout << "See total budget of bank [5] : " << endl;
	cout << "See total debtors' debt : " << endl;
}