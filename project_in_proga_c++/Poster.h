#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Poster
{
public: 
	Poster();
	Poster(const Poster& other);
	Poster& operator =(const Poster& other);
	virtual~Poster();
	Poster(string name, string ganre, string director, string country, string budget, string way_file);
	virtual int show_about_film() = 0;
protected:
	string name;
	string ganre;
	string director;
	string country;
	string budget;
	string way_file;
};

