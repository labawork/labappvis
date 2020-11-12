#include"decrypt.h"
#include<iostream>
#include<fstream>
#include"user.h"
using namespace std;
void decrypt1()
{
	decrypt person;
	ifstream fin;
	int number;
	cout << "write the number of deposit" << endl;
	cin >> number;
	fin.open("person.txt", ofstream::app | ofstream::binary);
	if (!fin.is_open())
	{
		cout << "error" << endl;
	}
	else
	{
		while (fin.read((char*)&person, sizeof(decrypt)))
		{
			if (person.numberuser == number)
			{
				cout << "You have a depozit" << endl;
			}
		}
	}
	fin.close();

}