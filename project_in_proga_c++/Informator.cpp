#include "Informator.h"

Informator::Informator()
{
	this->price = 0;
	this->count_films = 0;
	this->count_cartoon= 0;
	this->count_serials = 0;
	this->count_shr_films = 0;
	this->films = NULL;
	this->cartoons = NULL;
	this->shr_films = NULL;
	this->serials = NULL;
}


Informator::Informator(Movie m, Cartoon c, TVseries t, ShortFilms s )
{
	this->films = new Movie[1];
	this->films[0] = m;
	this->cartoons = new Cartoon[1];
	this->cartoons[0] = c;
	this->shr_films = new ShortFilms[1];
	this->shr_films[0] = s;
	this->serials = new TVseries[1];
	this->serials[0] = t;
	this->count_cartoon = 1;
	this->count_films = 1;
	this->count_serials = 1;
	this->count_shr_films = 1;
	this->price = 150;
}

Informator::~Informator()
{
	delete[]this->films;
	delete[]this->cartoons;
	delete[]this->shr_films;
	delete[]this->serials;
}

void Informator::Show(Poster* ptr)
{
	ptr->show_about_film();
	cout << endl;
	cout << "Цены: \t\tЗалы:" << endl;
	cout << "От " << price - 10 << " До " << price + 20 << "\tОбычный" << endl;
	cout << "От " << price + 20 << " До " << price + 70 << "\tVIP" << endl;
	cout << "От " << price << " До " << price + 50 << "\t3D" << endl;
	cout << "От " << price + 50 << " До " << price + 100 << "\tVip 3D" << endl;
}

void Informator::add_films(Movie newfilms)
{
	Movie* new_arr = new Movie[this->count_films + 1];
	for (int i = 0; i < this->count_films; i++)
	{
		new_arr[i] = this->films[i];
	}
	new_arr[this->count_films] = newfilms;
	delete[]this->films;
	this->films = new_arr;
	this->count_films++;
}

void Informator::add_cartoon(Cartoon newcartoon)
{
	Cartoon* new_arr = new Cartoon[this->count_cartoon + 1];
	for (int i = 0; i < this->count_cartoon; i++)
	{
		new_arr[i] = this->cartoons[i];
	}
	new_arr[this->count_cartoon] = newcartoon;
	delete[]this->cartoons;
	this->cartoons = new_arr;
	this->count_cartoon++;
}

void Informator::add_srt_film(ShortFilms new_shr_film)
{
	ShortFilms* new_arr = new ShortFilms[this->count_shr_films + 1];
	for (int i = 0; i < this->count_shr_films; i++)
	{
		new_arr[i] = this->shr_films[i];
	}
	new_arr[this->count_shr_films] = new_shr_film;
	delete[]this->shr_films;
	this->shr_films = new_arr;
	this->count_shr_films++;
}

void Informator::add_serials(TVseries new_serial)
{
	TVseries* new_arr = new TVseries[this->count_serials + 1];
	for (int i = 0; i < this->count_serials; i++)
	{
		new_arr[i] = this->serials[i];
	}
	new_arr[this->count_serials] = new_serial;
	delete[]this->serials;
	this->serials = new_arr;
	this->count_serials++;
}

void Informator::showfilms()
{
	cout << "Фильмы: ";
	for (int i = 0; i < this->count_films; i++)
	{
		cout << i+1 << ")" <<"\""<< this->films[i].getName() << "\"" << "; ";
	}
	cout << endl;
}

void Informator::show_srh_films()
{
	cout << "Короткие фильмы: ";
	for (int i = 0; i < this->count_shr_films; i++)
	{
		cout << i + 1 << ")" << "\"" << this->shr_films[i].getName() << "\"" << "; ";
	}
	cout << endl;
}

void Informator::show_cartoon()
{
	cout << "Мультфильмы: ";
	for (int i = 0; i < this->count_cartoon; i++)
	{
		cout << i + 1 << ")" << "\"" << this->cartoons[i].getName() << "\"" << "; ";
	}
	cout << endl;
}

void Informator::show_serials()
{
	cout << "Сериалы: ";
	for (int i = 0; i < this->count_serials; i++)
	{
		cout << i + 1 << ")" << "\"" << this->serials[i].getName() << "\"" << "; ";
	}
	cout << endl;
}

int Informator::getCount_films()
{
	return this->count_films;
}

int Informator::getCount_cartoons()
{
	return this->count_cartoon;
}

int Informator::getCount_serials()
{
	return this->count_serials;
}

int Informator::getCount_shr_flms()
{
	return this->count_shr_films;
}

Movie* Informator::getFilms()
{
	return this->films;
}

Cartoon* Informator::getCartoons()
{
	return this->cartoons;
}

ShortFilms* Informator::getShort_fms()
{
	return this->shr_films;
}

TVseries* Informator::getSerials()
{
	return this->serials;
}

Informator& Informator::operator=(const Informator& other)
{
	int i;
	this->price = other.price;
	this->count_films = other.count_films;
	this->count_cartoon = other.count_cartoon;
	this->count_serials = other.count_serials;
	this->count_shr_films = other.count_shr_films;

	if (this->films != nullptr)
		delete[] this->films;
	Movie * new_films = new Movie[other.count_films];
	for (i = 0; i < other.count_films; i++)
	{
		new_films[i] = other.films[i];
	}
	this->films = new_films;

	if (this->cartoons != nullptr)
		delete[] this->cartoons;
	Cartoon* new_cartoons = new Cartoon[other.count_cartoon];
	for (i = 0; i < other.count_cartoon; i++)
	{
		new_cartoons[i] = other.cartoons[i];
	}
	this->cartoons = new_cartoons;

	if (this->shr_films != nullptr)
		delete[] this->shr_films;
	ShortFilms* new_shr_films = new ShortFilms[other.count_shr_films];
	for (i = 0; i < other.count_shr_films; i++)
	{
		new_shr_films[i] = other.shr_films[i];
	}
	this->shr_films = new_shr_films;

	if (this->serials != nullptr)
		delete[]this->serials;
	TVseries* new_serials = new TVseries[other.count_serials];
	for (i = 0; i < other.count_serials; i++)
	{
		new_serials[i] = other.serials[i];
	}
	this->serials = new_serials;

	return *this;
};

Informator& Informator::operator++()
{
	this->price += this->price / 10;//збільшуємо на 10%
	return *this;
}

Informator& Informator::operator--()
{
	this->price -= this->price/10;//зменшуємо на 10%
	return *this;
}

