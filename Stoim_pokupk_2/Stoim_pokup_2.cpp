#include<iostream>
using namespace std;
#define OFFSET "\t\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	int cena_tetr, kolvo, cena_obl, stoim_pokup;
	// Просим ввести данные
	cout << OFFSET << "ВЫЧИСЛЕНИЕ СТОИМОСТИ ПОКУПКИ\n\n";
	cout << "Введите исходные данные:" << endl;
	cout << "Цена тетради (руб) -> ";
	cin >> cena_tetr;
	cout << "Цена обложки (руб) -> ";
	cin >> cena_obl;
	cout << "Количество комплектов (шт) -> ";
	cin >> kolvo;
	// Вычисляем стоимость покупки
	stoim_pokup = (cena_tetr + cena_obl) * kolvo;
	cout << "\n";
	// Выводим итог
	cout << OFFSET << "СТОИМОСТЬ ПОКУПКИ: " << stoim_pokup << " руб\n\n";
	cout << "Милькин Сергей, группа СБД121" << endl;
}

