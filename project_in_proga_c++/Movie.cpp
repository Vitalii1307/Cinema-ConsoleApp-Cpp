#include "Movie.h"

Movie::Movie()
{
}


Movie::~Movie()
{
}

Movie::Movie(string film_company, string _operator, string next_movie, string name, string ganre, string director, string country, string budget, string way_file) : Poster(name, ganre, director, country, budget, way_file)
{
	this->film_company = film_company;
	this->_operator = _operator;
	this->next_movie = next_movie;
}



int Movie::show_about_film()
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
	cout << "Кинокомпания: " << this->film_company << endl;
	cout << "Главный оператор: " << this->_operator << endl;
	cout << "Следующий фильм: " << this->next_movie << endl;
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

string Movie::getName()
{
	return this->name;
}


Movie::Movie(const Movie& other)
{
	this->film_company = other.film_company;
	this->_operator = other._operator;
	this->next_movie = other.next_movie;
	this->name = other.name;
	this->ganre = other.ganre;
	this->director = other.director;
	this->country = other.country;
	this->budget = other.budget;
	this->way_file = other.way_file;
}

Movie& Movie::operator=(const Movie& other)
{
	this->film_company = other.film_company;
	this->_operator = other._operator;
	this->next_movie = other.next_movie;
	this->name = other.name;
	this->ganre = other.ganre;
	this->director = other.director;
	this->country = other.country;
	this->budget = other.budget;
	this->way_file = other.way_file;
	return *this;
}

ostream& operator<<(ostream& os, const Movie& data)
{
	os << "Имя: " << data.name << "\n";
	os << "Жанр: " << data.ganre << "\n";
	os << "Режиссер: " << data.director << "\n";
	os << "Страна: " << data.country << "\n";
	os << "Бюджет: " << data.budget << "\n";
	os << "Кинокомпания: " << data.film_company << "\n";
	os << "Главный оператор: " << data._operator << "\n";
	os << "Следующий фильи: " << data.next_movie << "\n";
	return os;
}
