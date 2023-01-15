#include "Cinema.h"

int Cinema::count_all_worker = 0;

Cinema::Cinema(): name("non"), address_cinema("non")
{
	
	this->admin = Administration();
	this->worker = NULL;
	this->hall = NULL;
	this->count_worker = 0;
	this->count_hall = 0;
}

Cinema::~Cinema()
{
	delete[]this->worker;
	delete[]this->hall;
}


Cinema::Cinema(string name, string address_cinema, Administration admin, WorkingClass worker, Hall<int, string> hall)
{
	this->name = name;
	this->address_cinema = address_cinema;
	this->admin = admin;
	count_all_worker++;
	this->worker = new WorkingClass[1];
	this->worker[0] = worker;
	count_all_worker++;
	this->hall = new Hall<int, string>[1];
	this->hall[0] = hall;
	this->count_worker = 1;
	this->count_hall = 1;

}

void Cinema::addWorker(WorkingClass newWorker)
{
	WorkingClass* new_arr = new WorkingClass[this->count_worker + 1];
	for (int i = 0; i < this->count_worker; i++)
	{
		new_arr[i] = this->worker[i];
	}
	new_arr[this->count_worker] = newWorker;
	delete[]this->worker;
	this->worker = new_arr;
	this->count_worker++;
	count_all_worker++;
}

void Cinema::addHall(Hall<int, string> newHall)
{
	Hall<int, string>* new_arr = new Hall<int, string>[this->count_hall + 1];
	for (int i = 0; i < this->count_hall; i++)
	{
		new_arr[i] = this->hall[i];
	}
	new_arr[this->count_hall] = newHall;
	delete[] this->hall;
	this->hall = new_arr;
	this->count_hall++;
}

Cinema& Cinema::operator=(const Cinema& other)
{
	this->name = other.name;
	this->address_cinema = other.address_cinema;
	this->admin = other.admin;
	if (this->worker != nullptr)
		delete[] this->worker;
	this->worker = new WorkingClass[other.count_worker];
	for (int i = 0; i < other.count_worker; i++)
	{
		this->worker[i] = other.worker[i];
	}
	if (this->hall != nullptr)
		delete[] this->hall;
	this->hall = new Hall<int, string>[other.count_hall];
	for (int j = 0; j < other.count_hall; j++)
	{
		this->hall[j] = other.hall[j];
	}
	this->count_worker = other.count_worker;
	this->count_hall = other.count_hall;
	return *this;
}

Hall<int, string> Cinema::operator[](int N)
{
	for (int i = 0; i < this->count_hall; i++)
	{
		if (this->hall[i].getNum() == N)
			return this->hall[i];
	}
	return Hall<int, string>();
}

int Cinema::getCount_All_Wrk()
{
	return count_all_worker;
}

string Cinema::getName()
{
	return this->name;
}

string Cinema::getAgress_cin()
{
	return this->address_cinema;
}

void Cinema::show_name_worker()
{
	for (int i = 0; i < this->count_worker; i++)
	{
		cout <<" "<< i+1 << ") " << this->worker[i].getName();
	}
	cout << endl;
}

WorkingClass* Cinema::getWorking()
{
	return this->worker;
}

Hall<int, string>* Cinema::getHall()
{
	return this->hall;
}

int Cinema::getCountHall()
{
	return this->count_hall;
}

int Cinema::getCount_worker()
{
	return this->count_worker;
}


Cinema::Cinema(const Cinema& other)
{
	this->name = other.name;
	this->address_cinema = other.address_cinema;
	this->admin = other.admin;
	this->worker = new WorkingClass[other.count_worker];
	for (int i = 0; i < other.count_worker; i++)
	{
		this->worker[i] = other.worker[i];
	}
	this->hall = new Hall<int, string>[other.count_hall];
	for (int j = 0; j < other.count_hall; j++)
	{
		this->hall[j] = other.hall[j];
	}
	this->count_worker = other.count_worker;
	this->count_hall = other.count_hall;
}

