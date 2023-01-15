#pragma once
#include "Main_menu.h"
#include "Administration.h"
#include <vector>
class Choise
{
public:
	Choise();
	Choise(Main_menu new_menu);
	void add_menu(Main_menu new_menu);

	Choise& operator =(const Choise& other);
	Main_menu get_current();
	vector<Main_menu> get_menus();
private:
	vector<Main_menu> menus;
	Main_menu current;
};

