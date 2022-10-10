#pragma once


struct Debtor {
	char* name;
	char* surname;
	int id;
	int debt;
	int payment;



};



struct Log {
	int id;
	char* content;
	const char* datetime = __DATE__;
};




struct Bank {
	char* bankname;
	int debtor_count;
	int totaldebt;
	int totalbudget;
};

