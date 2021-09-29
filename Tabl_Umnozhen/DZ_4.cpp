//ДЗ_4
#include<iostream>
#include<conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	char key; //Код клавиши
	int otvet; // пункт меню
	
	cout << OFFSET << "======================================================\n\n";
	cout << OFFSET << "Домашнее задание № 4 (Милькин Сергей, группа СБД121)\n\n";
	cout << OFFSET << "======================================================\n\n\n";
	cout << "\t\t\t\t\t" << "   Выберите пункт меню и нажмите Enter\n";
	cout << "\t\t\t\t\t" << "   Для выхода из программы нажмите Esc\n\n";

	do
		{
		cout << OFFSET << "======================================================\n\n";
		cout << OFFSET << "1.    Вычислить факториал\n\n";
		cout << OFFSET << "2.    Возвести число в степень\n\n";
		cout << OFFSET << "3.    Вывести ASCII-таблицу\n\n";
		cout << OFFSET << "4.    Вывести таблицу умножения\n\n";
		cout << OFFSET << "5.    Вывести таблицу Пифагора\n\n";
		cout << OFFSET << "Esc.  Выход\n\n";

		cout << OFFSET << "======================================================\n\n\n";
// Первая задача - Факториал
		otvet = _getch() - 48;
		if (otvet == 1) {
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "======================================================\n\n";
				cout << OFFSET << "                 ФАКТОРИАЛ ЧИСЛА\n\n";
				cout << OFFSET << "======================================================\n\n\n";
				cout << "\t\t\t\t\t" << "   Ведите число и нажмите Enter\n";
				double factor = 1;
				int chislo, i;
				cin >> chislo;
				for (i = 1; i <= chislo; i++) {
					factor = factor * i;
				}
				cout << "\t\t\t\t\t" << " Факториал числа  " << chislo << "!  = " << factor << "\n";
			}
		}
// Вторая задача - Степень числа
		if (otvet == 2) {
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "======================================================\n\n";
				cout << OFFSET << "                 СТЕПЕНЬ ЧИСЛА \n\n";
				cout << OFFSET << "======================================================\n\n\n";
				cout << "\t\t\t\t\t" << "       Ведите число и нажмите Enter\n";
				cout << "\t\t\t\t\t" << "   Ведите степень числа и нажмите Enter\n";
				double chislo;
				int stepen, i;
				cin >> chislo >> stepen;
				double result = chislo;
				if (stepen == 0) {
					cout << "\t\t\t\t\t" << "Любое число в степени 0 равняется единице\n";
				}
				else
				{

					for (i = 1; i < stepen; i++) {
						chislo *= result;
					}
					cout << "\t\t\t\t\t\t" << result << " ^ " << stepen << " = " << chislo << "\n";

				}
			}
		}
		// Третья задача - ASCII - таблица
		if (otvet == 3) {
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "======================================================\n\n";
				cout << OFFSET << "                 Таблица ASCII \n\n";
				cout << OFFSET << "======================================================\n\n\n";
				cout << "\t\t\t\t\t" << "       Просто нажмите Enter\n";
				char key;
				int i;
				for (i = 1; i < 256; i++)
				{
					key = i;
					cout << key << "\t";
				}
			}
		}
		// Четвертая задача - таблица умножения
		if (otvet == 4) {
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "======================================================\n\n";
				cout << OFFSET << "                 Таблица УМНОЖЕНИЯ \n\n";
				cout << OFFSET << "======================================================\n\n\n";
				int i, j;
				for (i = 2; i <= 9; i++)
				{
					for (j = 1; j <= 9; j++)
					{
						cout << i << " * " << j << " = " << i * j <<" "<< " \t" << endl;
						}
					cout << endl;
				}
				
			}
		}
		// Пятая задача - Таблица Пифагора
		if (otvet == 5) {
			if (otvet == 27 - 48)
			{
				cout << "Выход" << endl;
				break;
			}
			{
				cout << OFFSET << "======================================================\n\n";
				cout << OFFSET << "                 Таблица ПИФАГОРА \n\n";
				cout << OFFSET << "======================================================\n\n\n";
				int i, j;
				for (i = 1; i <= 9; i++)
				cout <<"     " << i << "\t";
				cout << endl;
				for (i = 2; i <= 9; i++)
				{
					for (j = 1; j <= 9; j++)
					cout <<"     " << i * j << "\t";
					cout << endl;
				}
			}
			}
		key = _getch();
		} while (key != 27);
}
