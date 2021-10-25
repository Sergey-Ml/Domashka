#include <iostream>
#include <conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"
int ReservePrint();//в обратн напр
int Sum();//сумма
int Avg();//средн арифм
int minValueIn();//миним знач
int maxValueIn();//максим значен
int Sort();//сортир по возраст
int shiftLeft();// сдвиг влево
int shiftRight();//сдвиг вправо



int main()
{
	setlocale(LC_ALL, "Russian");
	char key; //Код клавиши
	int otvet; // пункт меню
	cout << OFFSET << "======================================================\n\n";
	cout << OFFSET << "            Домашнее задание № 7 (Массивы)\n\n";
	cout << OFFSET << "            (Милькин Сергей, группа СБД121)\n\n";
	cout << OFFSET << "======================================================\n\n\n";
	cout << "\t\t\t\t\t" << "   Выберите пункт меню и нажмите Enter\n";
	cout << "\t\t\t\t\t" << "   Для выхода из программы нажмите Esc\n\n";

	do
	{
		cout << OFFSET << "======================================================\n\n";
		cout << OFFSET << "1.    Вывести массив в обратном порядке  \n\n";
		cout << OFFSET << "2.    Найти сумму элементов массива \n\n";
		cout << OFFSET << "3.    Найти среднее арифметическое элементов массива \n\n";
		cout << OFFSET << "4.    Найти минимальное значение в массиве \n\n";
		cout << OFFSET << "5.    Найти максимальное значение в массиве \n\n";
		cout << OFFSET << "6.    Сортировка массива в порядке возрастания \n\n";
		cout << OFFSET << "7.    Циклический сдвиг влево \n\n";
		cout << OFFSET << "8.    Циклический сдвиг вправо \n\n";
		cout << OFFSET << "Esc.  Выход\n\n";
		cout << OFFSET << "======================================================\n\n\n";


		otvet = _getch() - 48;

		// Задача 1


	
		key = _getch();
	} while (key != 27);

}