#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int razmer, i, j, k, x;
	cout << "Введите размер: ";
	cin >> razmer;
	cout << endl;
	cout << "   "; //сдвиг верхней оконтовки
	setlocale(LC_ALL, "C");
	cout << char(201);
	for (int y = 1; y <= razmer*razmer*2; y++)
			cout << char(205);
	cout << char(187);
	cout << "\n";
	for (k = 0; k < razmer; k++)
	{
	
		for (i = 0; i < razmer; i++) //строки
		{
			cout << "   ";
			cout << char(186);
			
			for (j = 0; j < razmer; j++) //столбц

			{
			
				for (x = 0; x < razmer; x++)
				
				{
					
					if ((k + j) % 2 == 0)
					{
						cout << char(219)<< char(219);
					}
					else
					{
						cout << "  ";
						
					}
					
					
				}
				
			}
			cout << char(186);
			cout << " \n";
			}
		
	}
	cout << "   ";
	cout << char(200);
	for (int y = 1; y <= razmer * razmer * 2; y++)
	{
		cout << char(205);
	}
	cout << char(188);
	cout << "\n";
	cout << "     ";
}
