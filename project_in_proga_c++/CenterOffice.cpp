#include "CenterOffice.h"

CenterOffice::CenterOffice(): name_general_director("non"), address_office("non")
{
}

CenterOffice::CenterOffice(string name, string address)
{
	this->address_office = address;
	this->name_general_director = name;
}

CenterOffice::CenterOffice(const CenterOffice& other)
{
	vector<Cinema> newVector;
	this->name_general_director = other.name_general_director;
	this->address_office = other.address_office;
	for (int i = 0; i < other.myVector.size(); i++)
	{
		newVector.push_back(other.myVector[i]);
	}
	this->myVector = newVector;
}

CenterOffice& CenterOffice::operator=(const CenterOffice& other)
{
	vector<Cinema> newVector;
	this->address_office = other.address_office;
	this->name_general_director = other.name_general_director;

	if (!(this->myVector.empty()))
		this->myVector.clear();

	for (int i = 0; i < other.myVector.size(); i++)
	{
		newVector.push_back(other.myVector[i]);
	}
	this->myVector = newVector;

	return *this;
}

string CenterOffice::getName_g_director()
{
	return this->name_general_director;
}

string CenterOffice::getAddress_office()
{
	return this->address_office;
}

void CenterOffice::addCinema(Cinema newCinema)
{
	this->myVector.push_back(newCinema);
}

void CenterOffice::show_office()
{
	cout<<"Имя генерального директора: "<<this->name_general_director<<endl;
	cout<<"Адрес офиса: "<<this->address_office<<endl;
	cout << "Количество кинотеатров: " << this->myVector.size();
	cout << "\t\tКоличество всех сотрудников сети: " << this->myVector[0].getCount_All_Wrk() << endl;;
}
