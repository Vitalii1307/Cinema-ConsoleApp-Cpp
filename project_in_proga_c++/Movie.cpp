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
	cout << "\t����� ���������� � ������" << endl;
	cout << "��������: " << this->name << endl;
	cout << "����: " << this->ganre << endl;
	cout << "�������: " << this->director << endl;
	cout << "������: " << this->country << endl;
	cout << "������: " << this->budget << endl;
	cout << endl;
	cout << "\t�������������� ���������� " << endl;
	cout << "������������: " << this->film_company << endl;
	cout << "������� ��������: " << this->_operator << endl;
	cout << "��������� �����: " << this->next_movie << endl;
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
	os << "���: " << data.name << "\n";
	os << "����: " << data.ganre << "\n";
	os << "��������: " << data.director << "\n";
	os << "������: " << data.country << "\n";
	os << "������: " << data.budget << "\n";
	os << "������������: " << data.film_company << "\n";
	os << "������� ��������: " << data._operator << "\n";
	os << "��������� �����: " << data.next_movie << "\n";
	return os;
}
