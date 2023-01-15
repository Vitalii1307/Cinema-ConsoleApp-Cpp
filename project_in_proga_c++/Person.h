#pragma once
#include <string>
#include <iostream>

using namespace std;
class Person
{
public:
	Person();
	Person(string, int, int);
	~Person();
	Person(const Person& other);
	string getName();
	int getAge();
	int getID();
	
	Person& operator=(const Person& other);
protected:
	string name;
	int age; 
	int ID;
};

