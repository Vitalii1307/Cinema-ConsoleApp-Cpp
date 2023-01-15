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
	cout << "\t����� ���������� � �����������" << endl;
	cout << "��������: " << this->name << endl;
	cout << "����: " << this->ganre << endl;
	cout << "�������: " << this->director << endl;
	cout << "������: " << this->country << endl;
	cout << "������: " << this->budget << endl;
	cout << endl;
	cout << "\t�������������� ���������� " << endl;
	cout << "��� �����������: " << this->type_cartoon << endl;
	cout << "��������-�����������: " << this->production_designer << endl;
	cout << endl;
	cout << "\t��������� �� �����������" << endl;
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
	os << "���: " << data.name << "\n";
	os << "����: " << data.ganre << "\n";
	os << "��������: " << data.director << "\n";
	os << "������: " << data.country << "\n";
	os << "������: " << data.budget << "\n";
	os << "���: " << data.type_cartoon << "\n";
	os << "��������-�����������: " << data.production_designer << "\n";
	return os;
}
