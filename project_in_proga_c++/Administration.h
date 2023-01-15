#pragma once
#include "Person.h"
class Administration :	public Person
{
public:
	Administration();
	~Administration();
	Administration(string, string , string, int, int);
	Administration(const Administration& other);
	Administration& operator=(const Administration& other);
	void show_admin();
private:
	string position;
	string inst_subor;
};

