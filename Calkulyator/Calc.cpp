//Калькулятор
#include<iostream>
#include<conio.h>
using namespace std;
#define OFFSET "\t\t\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	char key; //Код клавиши
	char op; // Оператор
	float num1, num2; // Вводимые числа
	cout << OFFSET << "======================================================\n\n";
	cout << OFFSET << "ПРОГРАММА КАЛЬКУЛЯТОР (Милькин Сергей, группа СБД121)\n\n";
	cout << OFFSET << "======================================================\n\n\n";
	cout << "\t\t\t\t\t" << "   Ввдите данные и нажмите Enter\n";
	cout << "\t\t\t\t\t" << "Для выхода из программы нажмите Esc\n\n";
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
				cout << "Делить на 0 нельзя!";
			cout << "____________________________________________\n";
			break;

		case ':':
			if (num2 != 0)
				cout << num1 << ":" << num2 << "=" << num1 / num2 << endl;
			else
				cout << "Делить на 0 нельзя!";
			break;

		default:
			cout << "С такими операторами я не умею работать!";
			break;

		}
		key = _getch();
	} while (key != 27);
}

