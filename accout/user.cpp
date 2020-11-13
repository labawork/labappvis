#include "user.h"
#include <iostream>
#include <fstream>
using namespace std;
void user::database()
{
	user person;
	ifstream fin;
	int number;
	fin.open("person.txt", ofstream::app | ofstream::binary);
	if (!fin.is_open())
	{
		cout << "error" << endl;
	}
	else
	{
		while (fin.read((char*)&person, sizeof(user)))
		{
			cout << "User Number is " << person.numberuser << endl;
		}

	}
	fin.close();
}

