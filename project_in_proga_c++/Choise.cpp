#include "Choise.h"
#include <iostream>
#include <conio.h>
using namespace std;

Choise::Choise()
{
	this->menus.clear();
}

Choise::Choise(Main_menu new_menu)
{	
	this->current = new_menu;	
}

void Choise::add_menu(Main_menu new_menu)
{
	this->menus.push_back(new_menu);
}

Choise& Choise::operator=(const Choise& other)
{
	vector <Main_menu> new_menus;
	for (int i = 0; i < other.menus.size(); i++)
	{
		new_menus.push_back(other.menus[i]);
	}
	this->menus = new_menus;
	this->current = other.current;
	return * this;
}

Main_menu Choise::get_current()
{
	return this->current;
}

vector<Main_menu> Choise::get_menus()
{
	return this->menus;
}