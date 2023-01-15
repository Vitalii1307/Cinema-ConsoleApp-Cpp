#include "CenterOffice.h"
#include "Administration.h"
#include "WorkingClass.h"
#include "Hall.h"
#include "Cinema.h"
#include "Movie.h"
#include "Cartoon.h"
#include "TVseries.h"
#include "ShortFilms.h"
#include "Informator.h"
#include "Main_menu.h"
#include "Choise.h"
#include "Second_menu.h"
#include <conio.h>
#include <iostream>
#include <string>
#include <locale>
using namespace std;
void menu(CenterOffice cen_office);

int main()
{
	setlocale(LC_ALL, "rus");
	CenterOffice cen_office("�������� ��������", "Wall Street");
	menu(cen_office);
	return 0;
}

void menu(CenterOffice cen_office)
{
	Administration admin_cin_1("��� ����������", "������� �������������", "��������� �������", 36, 145245);
	WorkingClass w1("����", "�������� ���������", "������������ ������", 21, 452192);
	WorkingClass w2("C���", "�������� ���������", "������������ ������", 19, 785324);
	WorkingClass w3("�����", "�������� ���������", "������������ ������", 20, 853456);
	WorkingClass w4("����", "�������� ���������", "������������ ������", 24, 896655);
	WorkingClass w5("�������", "�������� ������", "������� �������", 27, 827135);
	WorkingClass w6("��������", "�������� ������", "������� �������", 25, 675432);
	WorkingClass w7("�������", "��������", "����������� ������������", 48, 555555);
	WorkingClass w8("�����", "������-������", "������� � ���� ������", 29, 536514);
	Hall<int, string> h1(1, 80, "Panasonic PT - RQ32K", "Tannoy VQNet40 MH", "�������");//Barco Laser Flagship - 3d
	Hall<int, string> h2(2, 70, "Maxell MP-WU8701", "TANNOY VQ60", "3D");//Barco Laser Flagship - 3d
	Hall<int, string> h3(3, 60, "Sony VPL-VW570", "TANNOY VQ85DF", "VIP");//Barco Laser Flagship - 3d
	Hall<int, string> h4(4, 40, "Barco Laser Flagship", "TANNOY VQ85DF", "3D VIP");//Barco Laser Flagship - 3d
	Cinema cin1("Multiplex", "����� ������� ���������, 93", admin_cin_1, w1, h1);
	cen_office.addCinema(cin1);
	cin1.addWorker(w2);
	cin1.addWorker(w3);
	cin1.addWorker(w4);
	cin1.addWorker(w5);
	cin1.addWorker(w6);
	cin1.addWorker(w7);
	cin1.addWorker(w8);
	cin1.addHall(h2);
	cin1.addHall(h3);
	cin1.addHall(h4);

	Movie Avatar("Lightstorm Entertainment", "����� �����", "������ 2", "Avatar", "������� ����������", "������ �������", "���", "237 ���.���", "Avatar.txt");
	Movie Adve_Pagn("Heyday Films", "���� ������", "����������� ����������� 2", "����������� �����������", "�������� �����", "��� ����", "��������������", "55 ���.���", "Padington.txt");

	Cartoon Stor_toy("3D", "���� ��������", "������� �������", "������������ ��������", "���� ��������", "���", "30 ���.���", "Story toy.txt");
	Cartoon Song_sea("������� �����", "���� ���", "����� ����", "����������� �����", "���� ���", "��������", "7.5 ���.���", "Song sea.txt");

	TVseries Friends(236, 20, 10, "������", "������", "����� �����", "���", "20 ���.���", "Friend.txt");
	TVseries Black_sea(22, 70, 5, "������ �������", "������� ����������", "����� ������", "��������������", "25 ���.���", "Black mirror.txt");

	ShortFilms Way_home(18, "�����������", "������ �����", "�����", "������� ������", "�������", "1.5 ���. ���", "Way to home.txt");
	ShortFilms Count_toy(14, "�����������", "������ �������", "�����", "����� �. �������", "��������", "30 ���.����", "Country toy.txt");

	Informator info(Avatar, Stor_toy, Friends, Way_home);
	info.add_films(Adve_Pagn);
	info.add_cartoon(Song_sea);
	info.add_serials(Black_sea);
	info.add_srt_film(Count_toy);

	Second_menu menu2(cin1.getWorking(), admin_cin_1, cin1, info.getFilms(), info.getCartoons(), info.getShort_fms(), info.getSerials(), info, cen_office);
	Main_menu menu("����");////////////////////////////////main menu
	menu.add_line("���������� � �����������");                 /////
	menu.add_line("����������� �����");                        /////
	menu.add_line("���� �����");                               /////
	menu.add_line("���������� �� ������� �����");///////////////////
//	menu.showMenu();
	Main_menu inf_emp("���������� � �����������");////////info about employee
	inf_emp.add_line("����������");                              /////////
	inf_emp.add_line("�������������");//////////////////////////////////////////
	Main_menu emp("����������");
	emp.add_line(w1.getName());
	emp.add_line(w2.getName());
	emp.add_line(w3.getName());
	emp.add_line(w4.getName());
	emp.add_line(w5.getName());
	emp.add_line(w6.getName());
	emp.add_line(w7.getName());
	emp.add_line(w8.getName());
//	inf_emp.showMenu();
	Main_menu tech_part("����������� �����\n����:");//////techical part
	tech_part.add_line("1");                                     ///////
	tech_part.add_line("2");                                     ///////
	tech_part.add_line("3");                                     ///////
	tech_part.add_line("4");////////////////////////////////////////////
//	tech_part.showMenu();
	Main_menu aphish("���� �����");///////////////////aphish	
	aphish.add_line("������");                         /////
	aphish.add_line("�������");                        /////
	aphish.add_line("�����������");                    /////
	aphish.add_line("�������� ������");/////////////////////
//	aphish.showMenu();
	Main_menu gen_office("���������� �� ������� �����");////////main office
	Choise main(menu);
	main.add_menu(inf_emp);
	main.add_menu(tech_part);
	main.add_menu(aphish);
	main.add_menu(gen_office);
	menu2.choise_menu(main);
	cout << endl;

}

