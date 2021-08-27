#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int razmer, i, j, k, x;
	cout << "Введите размер доски :\n";
	cin >> razmer;

	for (k = 0; k < razmer; k++)
	{
		for (i = 0; i < razmer; i++) //строки
		{
			for (j = 0; j < razmer; j++) //столбц
			{
				for (x = 0; x < razmer; x++)
				{
					if ((k + j) % 2 == 0)
						cout << " * ";
					else
						cout << "   ";
				}
			}
			cout << "\n\n";
		}
		
	}

}
