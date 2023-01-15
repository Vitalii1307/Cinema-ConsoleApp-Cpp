#pragma once
#include "Poster.h"
#include "Cartoon.h"
#include "Movie.h"
#include "ShortFilms.h"
#include "TVseries.h"
#include <string>
class Informator
{
public:
	Informator();
	Informator& operator =(const Informator& other);
	Informator& operator ++();
	Informator& operator --();
	Informator(Movie m, Cartoon c, TVseries t, ShortFilms s);
	~Informator();
	void Show(Poster* ptr);
	void add_films(Movie newfilms);
	void add_cartoon(Cartoon newcartoon);
	void add_srt_film(ShortFilms new_shr_film);
	void add_serials(TVseries new_serial);
	void showfilms();
	void show_srh_films();
	void show_cartoon();
	void show_serials();
	int getCount_films();
	int getCount_cartoons();
	int getCount_serials();
	int getCount_shr_flms();
	Movie* getFilms();
	Cartoon* getCartoons();
	ShortFilms* getShort_fms();
	TVseries* getSerials();
private:
	Movie* films;
	Cartoon* cartoons;
	ShortFilms* shr_films;
	TVseries* serials;
	int price;
	int count_films;
	int count_cartoon;
	int count_serials;
	int count_shr_films;
};


