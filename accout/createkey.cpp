#include "createkey.h"
#include<iostream>
#include"user.h"
using namespace std;
void createskey(user)
{
	user person;
	cout << "come up with password" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> person.password[i];
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Your password is " << person.password[i] << endl;
	}
}