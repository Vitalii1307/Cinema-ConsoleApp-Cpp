#include "Administration.h"
#include "iostream"

Administration::Administration(): position("non"), inst_subor("non"), Person()
{
}
Administration::~Administration()
{
}

Administration::Administration(string name, string position, string inst_subor, int age, int ID): Person(name, age, ID)
{
	this->name = name;
	this->position = position;
	this->inst_subor = inst_subor;
	this->age = age;
}

Administration::Administration(const Administration& other)
{
	this->position = other.position;
	this->inst_subor = other.inst_subor;
	this->name = other.name;
	this->age = other.age;
	this->ID = other.ID;
}

Administration& Administration::operator=(const Administration& other)
{
	this->name = other.name;	
	this->position = other.position;
	this->inst_subor = other.inst_subor;
	this->age = other.age;
	this->ID = other.ID;
	return *this;
}

void Administration::show_admin()
{
	cout << "Имя: " << this->name << endl;
	cout << "Возраст: " << this->age << endl;
	cout << "Должность: " << this->position << endl;
	cout << "Обязательства: " << this->inst_subor << endl;
}

