//���������
#include<iostream>
#include<conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	char key; //��� ������� (��� ������ �� �����)
	int x, z; // �������� �����
	cout << OFFSET << "=============+++==============================================\n\n";
	cout << OFFSET << "     ��������� ��������� (������� ������, ������ ���121)\n\n";
	cout << OFFSET << "==============================================================\n\n\n";
	cout << "\t\t\t\t" << "��� ����������� ���������� ������ ������� ����� � ������� Enter\n";
	cout << "\t\t\t\t\t" << "  ��� ������ �� ��������� ������� Esc\n\n";
	do
	{
		cout << "������� ������� ����� n � ������� Enter:";
		cin >> x;
		z = x;
		int y = 0;
		while (x != 0)
		{
			y *= 10;
			y += x % 10;
			x = x / 10;
		}
		if (z == y)
			cout << "��������� ����� " << z << " - ���������" << endl;
		else
			cout << "��������� ����� " << z << " - �������" << endl;

		key = _getch();
	} while (key != 27);
}
