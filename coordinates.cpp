#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
using namespace std;

int main()

{
	setlocale(0, "Russian");
	int chek = 1;
	while (chek == 1)
	{
		cout << "Введите 1 для рассчета, 0 для завершения >";
		cin >> chek;
		switch (chek)
		{
		case (0):
		{
			cout << "Программа завершена";
			break;
		}
		case(1):
		{
			int chek2 = 1;
			float x, y, r, f;
			cout << "\nВведите 1 для перевода из декартовых в полярные" << endl;
			cout << "Введите 2 для перевода из полярных в декартовы" << endl;
			cout << "Введите 0 для выхода\n" << '>';
			cin>>chek2;
			switch (chek2)
			{
			case(0):
				continue;
			case(1):
				{
					cout << "\nВведите х >";
					cin >> x;
					cout << "\nВведите у >";
					cin >> y;
					if (x == 0 && y == 0)
					{
						cout << "Точка совпадает с полюсом" << endl;
						continue;
					}
					r = sqrt(x * x + y * y);
					f = (asin(y / (sqrt(x * x + y * y))))*(180/M_PI);
					cout << '(' << x << ';' << y << ") -> (" << r << ';' << f << ')' << endl;
					continue;
				}
			case(2):
				{
					cout << "\nВведите r >";
					cin >> r;
					cout << "\nВведите f >";
					cin >> f;
					if (r == 0)
					{
						cout << "Точка совпадает с полюсом" << endl;
						continue;
					}
					if (r < 0)
					{
						cout << "Модуль меньше нуля" << endl;
						continue;
					}
					x = (r*cos(f*(M_PI/180)));
					y = (r*sin(f*(M_PI/180)));
					cout << '(' << r << ';' << f << ") -> (" << x << ';' << y << ')' << endl;
					continue;
				}
			default:
				{
					cout << "Неизвестная ошибка" << endl;
					continue;
				}
			}
		}
		default:
		{
			cout << "Неизвестная ошибка" << endl;
			chek = 1;
			continue;
		}
		}
	}


}