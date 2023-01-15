#pragma once
#include "Poster.h"
class Movie :	public Poster
{
public:
	Movie();
	Movie(const Movie& other);
	Movie& operator =(const Movie& other);
	~Movie();
	Movie(string, string, string, string, string, string, string, string, string);
	friend ostream& operator<<(ostream& os, const Movie& data);
	int show_about_film() override;
	string getName();
private:
	string film_company;
	string _operator;
	string	next_movie;
};


