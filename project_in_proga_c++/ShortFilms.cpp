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
	cout << "\tОбщая информация о фильме" << endl;
	cout << "Название: " << this->name << endl;
	cout << "Жанр: " << this->ganre << endl;
	cout << "Режисер: " << this->director << endl;
	cout << "Страна: " << this->country << endl;
	cout << "Бюджет: " << this->budget << endl;
	cout << endl;
	cout << "\tДополнительная информация " << endl;
	cout << "Продолжительность, мин: " << this->duration << endl;
	cout << "Тип короткометражки: " << this->type << endl;
	cout << endl;
	cout << "\tПодробнее об фильме" << endl;
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
	os << "Имя: " << data.name << "\n";
	os << "Жанр: " << data.ganre << "\n";
	os << "Режиссер: " << data.director << "\n";
	os << "Страна: " << data.country << "\n";
	os << "Бюджет: " << data.budget << "\n";
	os << "Длительность, мин: " << data.duration << "\n";
	os << "Тип: " << data.type << "\n";
	return os;
}