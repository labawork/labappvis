#include "account.h"
#include<iostream>
#include"user.h"
#include"user.cpp"
#include<fstream>

using namespace std;
void enter()
{

	user person1;

	cout << "write your login" << endl;
		cin >> person1.numberuser;
		
	
	cout << endl;
	cout << "write ypur password" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> person1.password[i];
		
	}
	cout << endl;
	ofstream fin;
	fin.open("person.txt", ofstream::app|ofstream::binary);
	if (!fin.is_open())
	{
		cout << "error" << endl;
	}
	else
	{
		fin.write((char*)&user, sizeof(person1));
	}	
	fin.close();
	
	
}
void depozit()
{
	user person1;
	cout << "Put money into your acc" << endl;
		cin >> person1.data;
	
	cout << endl;

}
