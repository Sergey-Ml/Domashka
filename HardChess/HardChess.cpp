#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int razmer, i, j, k, x;
	cout << "������� ������ ����� :\n";
	cin >> razmer;

	for (k = 0; k < razmer; k++)
	{
		for (i = 0; i < razmer; i++) //������
		{
			for (j = 0; j < razmer; j++) //������
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
