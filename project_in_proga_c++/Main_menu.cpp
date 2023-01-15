#include "Main_menu.h"
#include <iostream>

Main_menu::Main_menu(string str)
{
	this->titul_str = str;
}

Main_menu::Main_menu()
{
	this->myVector.clear();
}

Main_menu::~Main_menu()
{
	this->myVector.clear();
}

void Main_menu::add_line(string str)
{
	this->myVector.push_back(str);
}

void Main_menu::showMenu()
{
	system("cls");
	cout <<"\t"<<this->titul_str<< endl;
	for (int i = 0; i < this->myVector.size(); i++)
	{
		cout << i + 1 << ") " << myVector[i] << endl;
	}
	cout << "0) Выход" << endl << endl << endl;
}

Main_menu& Main_menu::operator=(const Main_menu& other)
{
	vector<string> newVector;
	this->titul_str = other.titul_str;
	for (int i = 0; i < other.myVector.size(); i++)
	{
		newVector.push_back(other.myVector[i]);
	}
	this->myVector = newVector;
	return *this;
}
