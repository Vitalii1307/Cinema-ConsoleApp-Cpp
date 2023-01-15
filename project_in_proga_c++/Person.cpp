#include "Person.h"

Person::Person() : name("non")
{
	this->age = 0;
	this->ID = 0;
}

Person::Person(string name, int age, int ID)
{
	this->name = name;
	this->age = age;
	this->ID = ID;

}

Person::~Person()
{
}

Person::Person(const Person& other)
{
	this->name = other.name;
	this->age = other.age;
	this->ID = other.ID;
}

string Person::getName()
{
	return this->name;
}

int Person::getAge()
{
	return this->age;
}

int Person::getID()
{
	return this->ID;
}


Person& Person::operator=(const Person& other)
{
	this->name = other.name;
	this->age = other.age;
	this->ID = other.ID;
	return *this;
}
