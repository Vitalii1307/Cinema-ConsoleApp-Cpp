#pragma once
#include "Person.h"
class WorkingClass :	public Person
{
public:
	WorkingClass();
	~WorkingClass();
	WorkingClass(string, string, string, int, int);
	WorkingClass(const WorkingClass& other);
	WorkingClass& operator=(WorkingClass& other);
	string getPosition();
	string getDuties();
	friend ostream& operator<<(ostream& os, const WorkingClass& worker);
private:
	string position;
	string duties;
	
	
};

