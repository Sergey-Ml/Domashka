//��_4
#include<iostream>
#include<conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	char key; //��� �������
	int otvet; // ����� ����
	
	cout << OFFSET << "======================================================\n\n";
	cout << OFFSET << "�������� ������� � 4 (������� ������, ������ ���121)\n\n";
	cout << OFFSET << "======================================================\n\n\n";
	cout << "\t\t\t\t\t" << "   �������� ����� ���� � ������� Enter\n";
	cout << "\t\t\t\t\t" << "   ��� ������ �� ��������� ������� Esc\n\n";

	do
		{
		cout << OFFSET << "======================================================\n\n";
		cout << OFFSET << "1.    ��������� ���������\n\n";
		cout << OFFSET << "2.    �������� ����� � �������\n\n";
		cout << OFFSET << "3.    ������� ASCII-�������\n\n";
		cout << OFFSET << "4.    ������� ������� ���������\n\n";
		cout << OFFSET << "5.    ������� ������� ��������\n\n";
		cout << OFFSET << "Esc.  �����\n\n";

		cout << OFFSET << "======================================================\n\n\n";
// ������ ������ - ���������
		otvet = _getch() - 48;
		if (otvet == 1) {
			if (otvet == 27 - 48)
			{
				cout << "�����" << endl;
				break;
			}
			{
				cout << OFFSET << "======================================================\n\n";
				cout << OFFSET << "                 ��������� �����\n\n";
				cout << OFFSET << "======================================================\n\n\n";
				cout << "\t\t\t\t\t" << "   ������ ����� � ������� Enter\n";
				double factor = 1;
				int chislo, i;
				cin >> chislo;
				for (i = 1; i <= chislo; i++) {
					factor = factor * i;
				}
				cout << "\t\t\t\t\t" << " ��������� �����  " << chislo << "!  = " << factor << "\n";
			}
		}
// ������ ������ - ������� �����
		if (otvet == 2) {
			if (otvet == 27 - 48)
			{
				cout << "�����" << endl;
				break;
			}
			{
				cout << OFFSET << "======================================================\n\n";
				cout << OFFSET << "                 ������� ����� \n\n";
				cout << OFFSET << "======================================================\n\n\n";
				cout << "\t\t\t\t\t" << "       ������ ����� � ������� Enter\n";
				cout << "\t\t\t\t\t" << "   ������ ������� ����� � ������� Enter\n";
				double chislo;
				int stepen, i;
				cin >> chislo >> stepen;
				double result = chislo;
				if (stepen == 0) {
					cout << "\t\t\t\t\t" << "����� ����� � ������� 0 ��������� �������\n";
				}
				else
				{

					for (i = 1; i < stepen; i++) {
						chislo *= result;
					}
					cout << "\t\t\t\t\t\t" << result << " ^ " << stepen << " = " << chislo << "\n";

				}
			}
		}
		// ������ ������ - ASCII - �������
		if (otvet == 3) {
			if (otvet == 27 - 48)
			{
				cout << "�����" << endl;
				break;
			}
			{
				cout << OFFSET << "======================================================\n\n";
				cout << OFFSET << "                 ������� ASCII \n\n";
				cout << OFFSET << "======================================================\n\n\n";
				cout << "\t\t\t\t\t" << "       ������ ������� Enter\n";
				char key;
				int i;
				for (i = 1; i < 256; i++)
				{
					key = i;
					cout << key << "\t";
				}
			}
		}
		// ��������� ������ - ������� ���������
		if (otvet == 4) {
			if (otvet == 27 - 48)
			{
				cout << "�����" << endl;
				break;
			}
			{
				cout << OFFSET << "======================================================\n\n";
				cout << OFFSET << "                 ������� ��������� \n\n";
				cout << OFFSET << "======================================================\n\n\n";
				int i, j;
				for (i = 2; i <= 9; i++)
				{
					for (j = 1; j <= 9; j++)
					{
						cout << i << " * " << j << " = " << i * j <<" "<< " \t" << endl;
						}
					cout << endl;
				}
				
			}
		}
		// ����� ������ - ������� ��������
		if (otvet == 5) {
			if (otvet == 27 - 48)
			{
				cout << "�����" << endl;
				break;
			}
			{
				cout << OFFSET << "======================================================\n\n";
				cout << OFFSET << "                 ������� �������� \n\n";
				cout << OFFSET << "======================================================\n\n\n";
				int i, j;
				for (i = 1; i <= 9; i++)
				cout <<"     " << i << "\t";
				cout << endl;
				for (i = 2; i <= 9; i++)
				{
					for (j = 1; j <= 9; j++)
					cout <<"     " << i * j << "\t";
					cout << endl;
				}
			}
			}
		key = _getch();
		} while (key != 27);
}
