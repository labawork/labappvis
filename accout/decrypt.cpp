#include"decrypt.h"
#include<iostream>
#include<fstream>
using namespace std;

void decrypt::decrypt1()
{
	decrypt person;
	ifstream fin;
	fin.exceptions(ofstream::badbit | ofstream::failbit);
	try
	{
		fin.open("person.txt", ofstream::app | ofstream::binary);

	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "Error" << endl;
	}
	int number;
	int k = 0;
	cout << "Write the number of deposit" << endl;
	cin >> number;
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
				k++;
			}
		}
		if (k == 0) cout << "You dont have a depozit" << endl;
	}
	fin.close();

}
