#include "TVseries.h"

TVseries::TVseries() : Poster()
{
	this->countSeries = 0;
	this->series_duration = 0;
	this->count_seasons = 0;
}

TVseries::~TVseries()
{
}

TVseries::TVseries(int countSeries, int series_duration, int count_seasons, string name, string ganre, string director, string country, string budget, string way_file) : Poster(name, ganre, director, country, budget, way_file)
{
	this->countSeries = countSeries;
	this->series_duration = series_duration;
	this->count_seasons = count_seasons;
}

int TVseries::show_about_film()
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
	cout << "���������� �����: " << this->countSeries << endl;
	cout << "������� ����������������� �����: " << this->series_duration << endl;
	cout << "���������� �������: " << this->count_seasons << endl;
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

string TVseries::getName()
{
	return this->name;
}

TVseries::TVseries(const TVseries& other)
{
	this->countSeries = other.countSeries;
	this->series_duration = other.series_duration;
	this->count_seasons = other.count_seasons;
	this->name = other.name;
	this->ganre = other.ganre;
	this->director = other.director;
	this->country = other.country;
	this->budget = other.budget;
	this->way_file = other.way_file;
}

TVseries& TVseries::operator=(const TVseries& other)
{
	this->countSeries = other.countSeries;
	this->series_duration = other.series_duration;
	this->count_seasons = other.count_seasons;
	this->name = other.name;
	this->ganre = other.ganre;
	this->director = other.director;
	this->country = other.country;
	this->budget = other.budget;
	this->way_file = other.way_file;
	return *this;
}


ostream& operator<<(ostream& os, const TVseries& data)
{
	os << "���: " << data.name << "\n";
	os << "����: " << data.ganre << "\n";
	os << "��������: " << data.director << "\n";
	os << "������: " << data.country << "\n";
	os << "������: " << data.budget << "\n";
	os << "���������� �����: " << data.countSeries << "\n";
	os << "������� ����� �����: " << data.series_duration << "\n";
	os << "���������� �������: " << data.count_seasons << "\n";
	return os;
}