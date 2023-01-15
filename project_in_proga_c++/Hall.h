#pragma once
#include <string>
#include <iostream>
using namespace std;
template<class T_N,class T_S>
class Hall
{
public:
	Hall();
	Hall(const Hall& other);
	~Hall();
	Hall(T_N, T_N, T_S, T_S, T_S);
	T_N getNum();	
	void showHall();
private:
	T_N num;
	T_N count_places;
	T_S projector;
	T_S sound_system;
	T_S status;
};

template<class T_N, class T_S>
Hall<T_N, T_S>::Hall()
{
	this->num = 0;
	this->count_places = 0;
	this->projector = "non";
	this->sound_system = "non";
	this->status = "non";
}

template<class T_N, class T_S>
 Hall<T_N, T_S>::Hall(const Hall& other)
{
	 this->num = other.num;
	 this->count_places = other.count_places;
	 this->projector = other.projector;
	 this->sound_system = other.sound_system;
	 this->status = other.status;
}


template<class T_N, class T_S>
Hall<T_N, T_S>::~Hall()
{

}

template<class T_N, class T_S>
 Hall<T_N, T_S>::Hall(T_N num, T_N count_places, T_S projector, T_S sound_system, T_S status)
{
	 this->num = num;
	 this->count_places = count_places;
	 this->projector = projector;
	 this->sound_system = sound_system;
	 this->status = status;
}

 template<class T_N, class T_S>
  T_N Hall<T_N, T_S>::getNum()
 {
	 return this->num;
 }

 
  template<class T_N, class T_S>
  void Hall<T_N, T_S>::showHall()
  {
	  cout << "Номер: " << this->num << endl;
	  cout << "Количество мест: " << this->count_places << endl;
	  cout << "Проэктор: " << this->projector << endl;
	  cout << "Аудиосистема: " << this->sound_system << endl;
	  cout << "Статис зала: " << this->status << endl;
  }
