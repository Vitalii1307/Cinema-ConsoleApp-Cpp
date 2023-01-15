#pragma once
#include "Poster.h"
class TVseries :	public Poster
{
public:
	TVseries();
	TVseries(const TVseries& other);
	TVseries& operator =(const TVseries& other);
	~TVseries();
	TVseries(int, int, int, string, string, string,string, string, string);
	friend ostream& operator<<(ostream& os, const TVseries& data);
	int show_about_film() override;
	string getName();
private:
	int countSeries;
	int series_duration;// середній час одної серії
	int count_seasons;		
};

