#pragma once
#include "WorkingClass.h"
#include "Administration.h"
#include "Cinema.h"
#include "Movie.h"
#include "Cartoon.h"
#include "ShortFilms.h"
#include "TVseries.h"
#include "Informator.h"
#include "CenterOffice.h"
#include "Choise.h"
class Second_menu
{
public:
Second_menu(WorkingClass*, Administration, Cinema, Movie*, Cartoon*, ShortFilms*, TVseries*, Informator,CenterOffice);
Second_menu();
~Second_menu();
void transition(int N);
void choise_inf_empl();
void choise_tach();
void choise_aphish();
void choise_gen_offi();
int choise_menu(Choise main);
private:
	WorkingClass* arr_working;
	Administration admin;
	Cinema cinema;///можливо через присвоєння в Cinema статись помилка, через кучу пам'яті 
	Movie* films;
	Cartoon* cartoons;
	ShortFilms* shr_films;
	TVseries* serials;
	Informator info;
	CenterOffice cen_of;
};


/*     Меню
1) Информация о сотрудниках
2) Техническая часть
3) Кино афиша*/
