#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int razmer = 5, i, j;
	//cout << "Введите размер доски :\n";
//cin >> razmer;
//cout << "\n";

	for (i = 0; i < razmer; i++) //строк
	{
		for (j = 0; j < razmer; j++) //столб
		{
			for (int x = 0; x < razmer; x++) 
			{
				if ((i + j) % 2 == 0)
					cout << " * ";
				else
					cout << "   ";
			}
		}
		cout << "\n\n";
	}
}
