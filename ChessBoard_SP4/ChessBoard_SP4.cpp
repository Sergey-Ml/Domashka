#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int razmer, i, j, k, x;
	cout << "Введите размер (четное число): \n";
	cin >> razmer;
	while (razmer % 2 != 0)
	{
		razmer = razmer + 1;
	}
	cout << "   "; //сдвиг верхней оконтовки
	setlocale(LC_ALL, "C");
	
	cout << char(201);

	for (int y = 1; y <= razmer * razmer * 2; y++)
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
				
				//cout << char(179);
				
				for (x = 0; x < razmer / 2; x++)
				{
					
					
					if ((k + j) % 2 == 0)
					{
									
					
							if (i % 2 != 0)
								
							{
								
								cout << "  ";
								cout << char(219) << char(219);
								
							}
							else {

								cout << char(219) << char(219);
								cout << "  ";
								
							}
						
					}
					else
					{
							
						cout << char(177) << char(177);
						cout << char(177) << char(177);
						
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
