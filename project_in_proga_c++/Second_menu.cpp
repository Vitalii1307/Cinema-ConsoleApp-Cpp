#include "Second_menu.h"
#include <iostream>
#include <fstream>
#include <Windows.h>

Second_menu::Second_menu(WorkingClass* arr_working, Administration admin, Cinema cin, Movie* films, Cartoon* cartoons, ShortFilms* shr_films, TVseries* serials, Informator info, CenterOffice cen_of)
{
	int i;
	WorkingClass* new_arr_working = new WorkingClass[cin.getCount_worker()];
	for (i = 0; i < cin.getCount_worker(); i++) {
		new_arr_working[i] = arr_working[i];
	}
	this->arr_working = new_arr_working;

	Movie* new_arr_films = new Movie[info.getCount_films()];
	for (i = 0; i < info.getCount_films(); i++) {
		new_arr_films[i] = films[i];
	}
	this->films = new_arr_films;

	Cartoon* new_arr_cartoon = new Cartoon[info.getCount_cartoons()];
	for (i = 0; i < info.getCount_cartoons(); i++) {
		new_arr_cartoon[i] = cartoons[i];
	}
	this->cartoons = new_arr_cartoon;

	ShortFilms* new_arr_shr = new ShortFilms[info.getCount_shr_flms()];
	for (i = 0; i < info.getCount_shr_flms(); i++) {
		new_arr_shr[i] = shr_films[i];
	}
	this->shr_films = new_arr_shr;

	TVseries* new_arr_serials = new TVseries[info.getCount_serials()];
	for (i = 0; i < info.getCount_serials(); i++) {
		new_arr_serials[i] = serials[i];
	}
	this->serials = new_arr_serials;

	this->info = info;
	this->cen_of = cen_of;
	this->cinema = cin;
	this->admin = admin;
}

Second_menu::Second_menu()
{
	this->arr_working = NULL;
	this->admin = Administration();
	this->cinema = Cinema();
	this->films = NULL;
	this->cartoons = NULL;
	this->shr_films = NULL;
	this->serials = NULL;
	this->info = Informator();
	this->cen_of = CenterOffice();
}

Second_menu::~Second_menu()
{
	delete[] this->arr_working;
	delete[] this->films;
	delete[] this->cartoons;
	delete[] this->shr_films;
	delete[] this->serials;
}

void Second_menu::transition(int N)
{
	switch (N)
	{
	case 1:
	{
		this->choise_inf_empl();
	}
	break;
	case 2:
	{
		this->choise_tach();
	}
	break;
	case 3:
	{
		this->choise_aphish();
	}
	break;
	case 4:
	{
		this->choise_gen_offi();
	}
	break;
	default:
		break;
	}
}

void Second_menu::choise_tach()
{
	int tmp;
	cout << "Выберите номер кинозала" << endl;
	cout << endl;
	cin >> tmp;
	system("cls");
	if (tmp == 0)
	{
		return;
	}
	else if(tmp > this->cinema.getCountHall())
	{
		cout << "Не верное число" << endl;
		return;
	}

	this->cinema[tmp].showHall();
	
}

void Second_menu::choise_aphish()
{
	fstream fs;
	fs.open("avisha.txt", fstream::out);
	if (!fs.is_open())
		cout << "Ошибка одкрития файла" << endl;
	else {
		int tmp, tmp2, save;
		cin >> tmp;
		system("cls");
		switch (tmp)//хардкод, бо 4 вида (класа)
		{
		case 0:
		{
			return;
		}
		break;
		case 1:
		{
			this->info.showfilms();
			do { cin >> tmp2; } while (tmp2<0||(tmp2 > this->info.getCount_films()));
			if (tmp2 == 0)
				return;
			this->info.Show(&this->films[tmp2 - 1]);
			cout << "Сохранить афишу?\n1) Да  2) Нет " << endl;
			cin >> save;
			if (save == 1) {
				fs << this->films[tmp2 - 1];
				cout << "Cохранено" << endl;
			}
		}
		break;
		case 2:
		{
			this->info.show_serials();
			do { cin >> tmp2; } while (tmp2 < 0 || (tmp2 > this->info.getCount_films()));
			if (tmp2 == 0)
				return;
			this->info.Show(&this->serials[tmp2 - 1]);
			cout << "Сохранить афишу?\n1) Да  2) Нет " << endl;
			cin >> save;
			if (save == 1) {
				fs << this->serials[tmp2 - 1];
				cout << "Cохранено" << endl;
			}
		}
		break;
		case 3:
		{
			this->info.show_cartoon();
			do { cin >> tmp2; } while (tmp2 < 0 || (tmp2 > this->info.getCount_films()));
			if (tmp2 == 0)
				return;
			this->info.Show(&this->cartoons[tmp2 - 1]);
			cout << "Сохранить афишу?\n1) Да  2) Нет " << endl;
			cin >> save;
			if (save == 1) {
				fs << this->cartoons[tmp2 - 1];
				cout << "Cохранено" << endl;
			}
		}
		break;
		case 4:
		{
			this->info.show_srh_films();
			do { cin >> tmp2; } while (tmp2 < 0 || (tmp2 > this->info.getCount_films()));
			if (tmp2 == 0)
				return;
			this->info.Show(&this->shr_films[tmp2 - 1]);
			cout << "Сохранить афишу?\n1) Да  2) Нет " << endl;
			cin >> save;
			if (save == 1) {
				fs << this->shr_films[tmp2 - 1];
				cout << "Cохранено" << endl;
			}
		}
		break;
		default:
			cout << "Не верное число" << endl;
			break;
		}
	}
}

void Second_menu::choise_gen_offi()
{	
	this->cen_of.show_office();
}

int Second_menu::choise_menu(Choise main)
{
	int tmp;

	cout << "Вас приветствует кинотеатр \"" << this->cinema.getName() <<"\""<< endl;
	cout << this->cinema.getAgress_cin() << endl;
	Sleep(3100);
	do {
		main.get_current().showMenu();		
		do {
			cin >> tmp;
			if (tmp == 0)
				exit(0);
			tmp--;
		} while (!(tmp >= 0 && tmp < main.get_menus().size()));
		main.get_menus()[tmp].showMenu();
		this->transition(++tmp);
		system("pause");
	} while (true);
	return 0;
}


void Second_menu::choise_inf_empl()
{
	int tmp, tmp2;
	cin >> tmp;
	system("cls");
	if (tmp == 1)
	{
		cout << "Выберите нужного человека" << endl;
		this->cinema.show_name_worker();
		cin >> tmp2;
		if (tmp2 == 0)
			return;
		if (tmp2 > cinema.getCount_worker() || tmp2 < 0) {
			cout << "Не верное число" << endl;
			return;
		}
		cout << this->arr_working[tmp2 - 1];
	}
	else if (tmp == 2)
		this->admin.show_admin();
	else if (tmp > 2)
	{
		cout << "Не верное число" << endl;
	}

}