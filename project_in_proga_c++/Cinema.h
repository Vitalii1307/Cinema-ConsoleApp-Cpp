#pragma once
#include <string>
#include <fstream>
#include "Person.h"
#include "Administration.h"
#include "WorkingClass.h"
#include "Hall.h"
using namespace std;

class Cinema
{
public:
	Cinema();
	~Cinema();
	Cinema(string, string, Administration, WorkingClass, Hall<int, string>);
	Cinema(const Cinema& other);
	void addWorker(WorkingClass newWorker);
	void addHall(Hall<int, string> newHall);
	Cinema& operator =(const Cinema& other);
	Hall<int, string> operator[](int N);
	static int getCount_All_Wrk();
	string getName();
	string getAgress_cin();
	void show_name_worker();
	WorkingClass* getWorking();
	Hall<int, string>* getHall();
	int getCountHall();
	int getCount_worker();
private:
	
	string name;
	string address_cinema;
	Administration admin;
	WorkingClass* worker;
	Hall<int, string>* hall;
	int count_worker;
	int count_hall;
	static int count_all_worker;
};

