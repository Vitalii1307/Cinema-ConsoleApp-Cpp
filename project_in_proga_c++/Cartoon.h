#pragma once
#include "Poster.h"
class Cartoon :	public Poster
{
public:
	Cartoon();
	Cartoon(const Cartoon& other);
	Cartoon& operator = (const Cartoon& other);
	~Cartoon();
	Cartoon(string , string, string, string ,string, string , string , string);
	friend ostream& operator<<(ostream& os, const Cartoon& data);
	int show_about_film() override;
	string getTypeCartoon();
	string getProductionDesigner();
	string getName();
private:
	string type_cartoon;
	string production_designer;

};