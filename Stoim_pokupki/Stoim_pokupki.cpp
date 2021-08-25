#include<iostream>
using namespace std;
#define OFFSET "\t\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	int cena_tetr, kolvo_tetr, cena_karand, kolvo_karand, stoim_pokup;
	// Просим ввести данные
	cout << OFFSET << "ВЫЧИСЛЕНИЕ СТОИМОСТИ ПОКУПКИ\n\n";
	cout << "Введите исходные данные:" << endl;
	cout << "Цена тетради (руб) -> ";
	cin >> cena_tetr;
	cout << "Количество тетрадей (шт) -> ";
	cin >> kolvo_tetr;
	cout << "Цена карандаша (руб) -> ";
	cin >> cena_karand;
	cout << "Количество карандашей (руб) -> ";
	cin >> kolvo_karand;
	// Вычисляем стоимость покупки
	stoim_pokup = cena_tetr * kolvo_tetr + cena_karand * kolvo_karand;
	cout << "\n";
	// Выводим итог
	cout << OFFSET << "СТОИМОСТЬ ПОКУПКИ: " << stoim_pokup << " руб\n\n";
	cout << "Милькин Сергей, группа СБД121" << endl;
}


