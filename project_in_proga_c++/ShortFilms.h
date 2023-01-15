#pragma once
#include "Poster.h"
class ShortFilms :	public Poster
{
public:
	ShortFilms();
	ShortFilms(const ShortFilms& other);
	ShortFilms& operator =(const ShortFilms& other);
	~ShortFilms();
	ShortFilms(int, string, string, string ,string, string ,string, string);
	int show_about_film() override;
	friend ostream& operator<<(ostream& os, const ShortFilms& data);
	string getName();	
private:
	int	duration;
	string type;
};


