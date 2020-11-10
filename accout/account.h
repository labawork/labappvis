#pragma once
#include"user.h"

class account
{
public:
	int password[5];
	int usernumber[6];
	void enter();
	void depozit();
	void withdrw();
	void printbalance();
	void showhistory();

};

