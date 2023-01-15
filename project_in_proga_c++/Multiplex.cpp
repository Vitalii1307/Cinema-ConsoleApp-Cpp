#include "Multiplex.h"

Multiplex::Multiplex() : adrress_cinema("non")
{
	Administration tmp;
	this->admin = tmp;
	this->worker = NULL;
	this->hall = NULL;
	this->count_worker = 0;
	this->count_hall = 0;
}



Multiplex::~Multiplex()
{
}

Multiplex::Multiplex(string address, Administration admin , int count)
{
	this->adrress_cinema = address;
	this->admin = admin;
	this->worker = NULL;
	this->count_worker = 0;
	this->hall - NULL;
	this->count_hall = 0;
}
