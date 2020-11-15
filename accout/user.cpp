#include "user.h"
#include <iostream>
#include <fstream>
using namespace std;
void user::database()
{
	user person;
	ifstream fin;
	int number;
        //fin.exceptions(ifstream::badbit | ifstream::failbit);
	try
	{
		fin.open("person.txt", ofstream::app | ofstream::binary);

	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "Error" << endl;
	}	
	if (!fin.is_open())
	{
		cout << "error" << endl;
	}
	else
	{
		try
		{
		while (fin.read((char*)&person, sizeof(user)))
		{
			cout << "User Number is " << person.numberuser << endl;
		}
		}
		catch (const std::exception& ex)
		{
			cout << ex.what() << endl;
			cout << "Error" << endl;
		}

	}
	fin.close();
}

