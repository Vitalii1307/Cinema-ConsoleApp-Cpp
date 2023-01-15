#include "Poster.h"


Poster::Poster() 
{
	this->name = "non";
	this->ganre = "non";
	this->director = "non";
	this->country = "non";
	this->budget = "non";
	this->way_file = "non";
}



Poster::Poster(string name, string ganre, string director, string country, string budget, string way_file)
{
	this->name = name;
	this->ganre = ganre;
	this->director = director;
	this->country = country;
	this->budget = budget;
	this->way_file = way_file;
}

Poster::~Poster()
{
}


Poster::Poster(const Poster& other)
{
	this->name = other.name;
	this->ganre = other.ganre;
	this->director = other.director;
	this->country = other.country;
	this->budget = other.budget;
	this->way_file = other.way_file;
}

Poster& Poster::operator=(const Poster& other)
{
	this->name = other.name;
	this->ganre = other.ganre;
	this->director = other.director;
	this->country = other.country;
	this->budget = other.budget;
	this->way_file = other.way_file;
	return *this;
}

