#include "Cartoon.h"
#include <iostream>
//#include <fstream>

Cartoon::Cartoon(): type_cartoon("non"), production_designer("non")
{}

Cartoon::~Cartoon()
{
}

Cartoon::Cartoon(string type_cartoon, string production_designer, string name, string ganre, string director,string country, string budget, string way_file) : Poster(name, ganre, director, country, budget, way_file)
{
	this->type_cartoon = type_cartoon;
	this->production_designer = production_designer;
}
string Cartoon::getTypeCartoon()
{
	return this->type_cartoon;
}

string Cartoon::getProductionDesigner()
{
	return this->production_designer;
}

string Cartoon::getName()
{
	return this->name;
}


int Cartoon::show_about_film()
{
	vector <string> arr;
	string str;
	ifstream fr;
	cout << "\tОбщая информация о мультфильме" << endl;
	cout << "Название: " << this->name << endl;
	cout << "Жанр: " << this->ganre << endl;
	cout << "Режисер: " << this->director << endl;
	cout << "Страна: " << this->country << endl;
	cout << "Бюджет: " << this->budget << endl;
	cout << endl;
	cout << "\tДополнительная информация " << endl;
	cout << "Тип мультфильма: " << this->type_cartoon << endl;
	cout << "Художник-постановщик: " << this->production_designer << endl;
	cout << endl;
	cout << "\tПодробнее об мультфильме" << endl;
	fr.open(this->way_file);
	if (!fr.is_open())
		return -1;
	else
	{
		while (!fr.eof())
		{
			getline(fr, str);
			arr.push_back(str);
		}
		fr.close();
	}

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i];
	}
	cout << endl;
	return 0;
}



Cartoon::Cartoon(const Cartoon& other)
{
	this->type_cartoon = other.type_cartoon;
	this->production_designer = other.production_designer;
	this->name = other.name;
	this->ganre = other.ganre;
	this->director = other.director;
	this->country = other.country;
	this->budget = other.budget;
	this->way_file = other.way_file;
}

Cartoon& Cartoon::operator=(const Cartoon& other)
{
	this->type_cartoon = other.type_cartoon;
	this->production_designer = other.production_designer;
	this->name = other.name;
	this->ganre = other.ganre;
	this->director = other.director;
	this->country = other.country;
	this->budget = other.budget;
	this->way_file = other.way_file;
	return *this;
}

ostream& operator<<(ostream& os, const Cartoon& data)
{
	os << "Имя: " << data.name << "\n";
	os << "Жанр: " << data.ganre << "\n";
	os << "Режиссер: " << data.director << "\n";
	os << "Страна: " << data.country << "\n";
	os << "Бюджет: " << data.budget << "\n";
	os << "Тип: " << data.type_cartoon << "\n";
	os << "Художник-постановщик: " << data.production_designer << "\n";
	return os;
}
