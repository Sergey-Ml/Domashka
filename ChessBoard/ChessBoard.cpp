#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int razmer, i, j;
	cout << "Введите размер доски не более 30: ";
	setlocale(LC_ALL, "C");
	cin >> razmer;
	cout << "\n\n";
	while (razmer > 30)
	{
		razmer = 30;
	}
	while (razmer % 2 != 0)
	{
		razmer = razmer + 1;
	}
	setlocale(LC_ALL, "Russian");
	cout << " Тут в планах были шахматные фигуры,\n";
	cout << " но не победил Unicode, a в ASCII их нет(( \n\n";
	setlocale(LC_ALL, "C");
	cout << "  ";
	cout << "   "; //сдвиг верх строки букв
	for (char lit = 97; lit <= razmer + 96; lit++)
		cout << " " << lit;
	cout << "\n";
	cout << "     "; //сдвиг верхней оконтовки
	cout << char(201);
	for (int y = 1; y <= razmer * 2; y++) {
		cout << char(205);
	}
	cout << char(187);
	cout << "\n";
	for (i = 1; i <= razmer; i++)
	{
		if (i < 10) {
			cout << " " << i;
			cout << "   "; //сдвиг всей таблицы
		}
		else
		{
			cout << " " << i;
			cout << "  ";//сдвиг всей таблтцы
		}
		cout << char(186);
		for (j = 1; j <= razmer / 2; j++)
		{
			if (i % 2 != 0) {
				cout << "  ";
				cout << char(219) << char(219);
			}
			else {
				cout << char(219) << char(219);
				cout << "  ";
			}
		}
		cout << char(186);
		cout << "  ";
		cout << "" << i;
		cout << "\n";
	}
	cout << "     "; //сдвиг нижней оонтовки
	cout << char(200);
	for (int y = 1; y <= razmer * 2; y++)
	{
		cout << char(205);
	}
	cout << char(188);
	cout << "\n";
	cout << "     "; //сдвиг нижней строки букв
	for (char lit = 97; lit <= razmer + 96; lit++)
		cout << " " << lit;
	cout << "\n";
	setlocale(LC_ALL, "Russian");
	cout << "     Тут тоже... с русским вышла засада\n";
	cout << " при включении Russian доска переключается \n";
	cout << "в набор букв, поэтому понатыкал setlocale,\n";
	cout << "выбор размера кратного двум обусловлен \n";
	cout << "красотой доски: один квадратик - два символа";
	//cout << "\u2658"; //КАК МНЕ ВЫВЕСТИ ШАХМАТНЫЕ ФИГУРКИ ??????!!!!!
	cout << "\n\n\n\n\n\n";
}