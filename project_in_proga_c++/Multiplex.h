#include "CenterOffice.h"
#include "Administration.h"
#include "WorkingClass.h"
#include "Hall.h"
#include <string>
using namespace std;
class Cinema :	
{
public:
	Cinema();
	~Cinema();
	Multiplex(string, Administration,  int);
private:
	string adrress_cinema;
	Administration admin;
	WorkingClass* worker;
	Hall* hall;
	int count_worker;
	int count_hall;
};
