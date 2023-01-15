#pragma once
#include "Cinema.h"
#include <string>
#include <vector>
using namespace std;
class CenterOffice
{
public:
	CenterOffice();
	CenterOffice(string, string);
	CenterOffice(const CenterOffice& other);
	CenterOffice& operator =(const CenterOffice& other);
	string getName_g_director();
	string getAddress_office();
	void addCinema(Cinema);
	void show_office();
private:
	vector<Cinema> myVector;
	string name_general_director;
	string address_office;
};

