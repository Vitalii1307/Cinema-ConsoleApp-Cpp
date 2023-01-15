#include "WorkingClass.h"
#include "Cinema.h"

WorkingClass::WorkingClass(): position("non"), duties("non"), Person()
{
	this->position = "non";
	this->duties = "non";
}

WorkingClass::~WorkingClass()
{
}

WorkingClass::WorkingClass(string name, string position, string duties, int age, int ID): Person(name, age, ID)
{
	this->position = position;
	this->duties = duties;

}

WorkingClass::WorkingClass(const WorkingClass& other)
{
	this->position = other.position;
	this->duties = other.duties;
	this->name = other.name;
	this->age = other.age;
	this->ID = other.ID;
}

WorkingClass& WorkingClass::operator=(WorkingClass& other)
{
	this->position = other.position;
	this->duties = other.duties;
	this->name = other.name;
	this->age = other.age;
	this->ID = other.ID;

	return *this;
}



string WorkingClass::getPosition()
{
	return this->position;
}

string WorkingClass::getDuties()
{
	return this->duties;
}

ostream& operator<<(ostream& os, const WorkingClass& worker)
{
	os << "Имя: " << worker.name << "\n";
	os << "Возраст: " << worker.age << "\n";
	os << "Должность: " << worker.position << "\n";
	os << "Обязанности: " << worker.duties << "\n";
	os << "ID " << worker.ID << "\n";
	return os;

}