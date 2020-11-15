#include"interface.h"
#include<iostream>
#include<fstream>

using namespace std;

void interface::show()
{
	user person1;
	cout << "All information (admin access only)" << endl;
	ifstream fin;
        fin.exceptions(ifstream::badbit | ifstream::failbit);
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
		while (fin.read((char*)&person1, sizeof(user)))
		{
			cout << "User Number : " << person1.numberuser << "  ";
			cout << "User Password : " << person1.password << " ";
			cout << "User depozit : " << person1.data << " ";
			cout << endl;

		}

	}
	fin.close();

}
