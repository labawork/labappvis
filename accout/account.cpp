#include "account.h"
#include<iostream>
#include"user.h"
#include"user.cpp"
#include<fstream>


using namespace std;
void enter()
{

	account person1;

	cout << "write your login" << endl;
		cin >> person1.numberuser;
		
	
	cout << endl;
	cout << "write ypur password" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> person1.password[i];
		
	}
	cout << endl;
	void createskey();
	ofstream fin;
	fin.open("person.txt", ofstream::app|ofstream::binary);
	if (!fin.is_open())
	{
		cout << "error" << endl;
	}
	else
	{
		fin.write((char*)&person1, sizeof(account));
	}	
	fin.close();
	
	
}


