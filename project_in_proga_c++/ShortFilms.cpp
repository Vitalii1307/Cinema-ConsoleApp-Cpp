#include "ShortFilms.h"

ShortFilms::ShortFilms()
{
}



ShortFilms::~ShortFilms()
{
}

ShortFilms::ShortFilms(int duration, string type, string name, string ganre, string director, string country, string budget, string way_file): Poster(name, ganre, director, country, budget, way_file)
{
	this->duration = duration;
	this->type = type;
}


int ShortFilms::show_about_film()
{

	vector <string> arr;
	string str;
	ifstream fr;
	cout << "\t����� ���������� � ������" << endl;
	cout << "��������: " << this->name << endl;
	cout << "����: " << this->ganre << endl;
	cout << "�������: " << this->director << endl;
	cout << "������: " << this->country << endl;
	cout << "������: " << this->budget << endl;
	cout << endl;
	cout << "\t�������������� ���������� " << endl;
	cout << "�����������������, ���: " << this->duration << endl;
	cout << "��� ���������������: " << this->type << endl;
	cout << endl;
	cout << "\t��������� �� ������" << endl;
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

string ShortFilms::getName()
{
	return this->name;
}

ShortFilms::ShortFilms(const ShortFilms& other)
{
	this->duration = other.duration;
	this->type = other.type;
	this->name = other.name;
	this->ganre = other.ganre;
	this->director = other.director;
	this->country = other.country;
	this->budget = other.budget;
	this->way_file = other.way_file;
}

ShortFilms& ShortFilms::operator=(const ShortFilms& other)
{
	this->duration = other.duration;
	this->type = other.type;
	this->name = other.name;
	this->ganre = other.ganre;
	this->director = other.director;
	this->country = other.country;
	this->budget = other.budget;
	this->way_file = other.way_file;
	return *this;
}


ostream& operator<<(ostream& os, const ShortFilms& data)
{
	os << "���: " << data.name << "\n";
	os << "����: " << data.ganre << "\n";
	os << "��������: " << data.director << "\n";
	os << "������: " << data.country << "\n";
	os << "������: " << data.budget << "\n";
	os << "������������, ���: " << data.duration << "\n";
	os << "���: " << data.type << "\n";
	return os;
}