//�����������
#include<iostream>
#include<conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	char key; //��� �������
	char op; // ��������
	float num1, num2; // �������� �����
	cout << OFFSET << "======================================================\n\n";
	cout << OFFSET << "��������� ����������� (������� ������, ������ ���121)\n\n";
	cout << OFFSET << "======================================================\n\n\n";
	cout << "\t\t\t\t\t" << "   ������ ������ � ������� Enter\n";
	cout << "\t\t\t\t\t" << "��� ������ �� ��������� ������� Esc\n\n";
	do
	{
		cin >> num1;
		cin >> op;
		cin >> num2;
		switch (op)
		{
		case '+':
			cout << "____________________________________________\n";
			cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
			cout << "____________________________________________\n";
			break;

		case '-':
			cout << "____________________________________________\n";
			cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
			cout << "____________________________________________\n";
			break;

		case '*':
			cout << "____________________________________________\n";
			cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
			cout << "____________________________________________\n";
			break;
		case '/':
			if (num2 != 0)
				cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
			else
				cout << "������ �� 0 ������!";
			cout << "____________________________________________\n";
			break;

		case ':':
			if (num2 != 0)
				cout << num1 << ":" << num2 << "=" << num1 / num2 << endl;
			else
				cout << "������ �� 0 ������!";
			break;

		default:
			cout << "� ������ ����������� � �� ���� ��������!";
			break;

		}
		key = _getch();
	} while (key != 27);
}

