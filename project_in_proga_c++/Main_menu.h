#pragma once
#include <string>
#include <vector>
using namespace std;
class Main_menu
{
public:
	Main_menu(string);
	Main_menu();
	~Main_menu();
	void add_line(string str);
	void showMenu();
	Main_menu& operator =(const Main_menu& other);
private:
	vector<string> myVector;
	string titul_str;
};

