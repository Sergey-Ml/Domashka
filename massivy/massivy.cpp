#include<iostream>
#include<conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"
#define ZD_1

int main()
{
	setlocale(LC_ALL, "Russian");
	char key; //��� �������
	int otvet; // ����� ����
	cout << OFFSET << "======================================================\n\n";
	cout << OFFSET << "            �������� ������� � 6 (�������)\n\n";
	cout << OFFSET << "            (������� ������, ������ ���121)\n\n";
	cout << OFFSET << "======================================================\n\n\n";
	cout << "\t\t\t\t\t" << "   �������� ����� ���� � ������� Enter\n";
	cout << "\t\t\t\t\t" << "   ��� ������ �� ��������� ������� Esc\n\n";

	do
	{
		cout << OFFSET << "======================================================\n\n";
		cout << OFFSET << "1.    ������� ������ � ������ �������  \n\n";
		cout << OFFSET << "2.    ������� ������ � �������� ������� \n\n";
		cout << OFFSET << "3.    ����� ����� ��������� ������� \n\n";
		cout << OFFSET << "4.    ����� ������� �������������� ��������� ������� \n\n";
		cout << OFFSET << "5.    ����� ����������� � ������������ �������� � ������� \n\n";
		cout << OFFSET << "6.    ����������� ����� \n\n";
		cout << OFFSET << "Esc.  �����\n\n";
		cout << OFFSET << "======================================================\n\n\n";
		
		
		otvet = _getch() - 48;
		if (otvet == 1)
		{
			if (otvet == 27 - 48)
			{
				cout << "�����" << endl;
				break;
			}
#ifdef ZD_1
			{
				cout << OFFSET << "=================================================++=====\n\n";
				cout << OFFSET << "          ����� ������� � ������ ������� \n\n";
				cout << OFFSET << "======================================================\n\n\n";
				cout << OFFSET << "               ������� ������ �������\n                     ";
				int razm;
				cin >> razm;
				const int size = 100;
				int array[size] = { 0 };
				for (int i = 0; i < razm; i++)
				{
					cout <<"������� �������� �������:\n";
					cin >> array[i];
				}
				cout <<OFFSET    << "-----------------------\n\n";
				cout <<"������ �����: ";

				for (int i = 0; i < razm; i++)
				{
					cout<< array[i] << " ";
				}

				cout << endl;
#endif //ZD_1
			}
		}
		key = _getch();
    } while (key != 27);
	
}
