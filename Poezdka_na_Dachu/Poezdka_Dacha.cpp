#include<iostream>
using namespace std;
#define OFFSET "\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	int rasstoyan, rashod, cena_benz, stoim_poezdk;
	// Просим ввести данные
	cout << OFFSET << "ВЫЧИСЛЕНИЕ СТОИМОСТИ ПОЕЗДКИ НА ДАЧУ И ОБРАТНО\n\n";
	cout << "Введите исходные данные:" << endl;
	cout << "Расстояние до дачи (км) -> ";
	cin >> rasstoyan;
	cout << "Расход бензина (литров на 100 км пробега) -> ";
	cin >> rashod;
	cout << "Цена литра бензина (руб) -> ";
	cin >> cena_benz;
	// Вычисляем стоимость покупки
	stoim_poezdk = 2 * rasstoyan * rashod * cena_benz / 100;
	cout << "\n";
	// Выводим итог
	cout << OFFSET << "ПОЕЗДКА НА ДАЧУ И ОБРАТНО ОБОЙДЕТСЯ В " << stoim_poezdk << " руб\n\n";
	cout << "Милькин Сергей, группа СБД121" << endl;
}
