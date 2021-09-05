#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int razmer = 5, i, j, k, x;
	//cout << "Введите размер доски не более 30: \n";
	//cin >> razmer;
	cout << "\n\n";
	//while (razmer > 30)
	//{
		//razmer = 30;
	//}
	while (razmer % 2 != 0)
	{
		razmer = razmer + 1;
	}
	setlocale(LC_ALL, "C");
	for (k = 1; k < razmer; k++) {
		cout << "     "; //сдвиг верхней оконтовки
		cout << char(201);
		for (int y = 1; y <= razmer * 2; y++) {
			cout << char(205);
		}
		cout << char(187);
		cout << "\n";
		for (i = 1; i <= razmer; i++)
		{
			cout << "     "; //сдвиг всей таблицы
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
				for (x = 0; x < razmer; x++)
				{
					if ((k + j) % 2 == 0)
					{
						cout << "  ";
						cout << char(219) << char(219);
					}
					else
					{
						cout << char(219) << char(219);
						cout << "   ";
					}
				}
				cout << "\n\n";
			}
			cout << char(186);
			cout << "  ";
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
		cout << "\n";
	}
	cout << "\n\n\n\n\n\n";
}