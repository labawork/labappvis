#include "account.h"
#include<iostream>
#include"user.h"

using namespace std;
void enter()
{
	user person1;
	cout << "write your login" << endl;
	for (int i = 0; i < 6; i++)
	{
		cin >> person1.numberuser[i];
	}
	cout << endl;
	cout << "write ypur password" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> person1.password[i];
	}
	cout << endl;
	
}
void depozit()
{
	user person1;
	cout << "Put money into your acc" << endl;
	for (int i = 0; i < 20; i++)
	{
		cin >> person1.data[i];
	}
	cout << endl;

}
