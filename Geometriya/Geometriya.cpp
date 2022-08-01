#include<iostream>
using namespace std;
#define Zvezdochki_0
//#define Zvezdochki_1
//#define Zvezdochki_2
//#define Zvezdochki_3
//#define Zvezdochki_4
//#define Romb
//#define Plus_Minus

int main() {
	setlocale(LC_ALL, "Russian");
#ifdef Zvezdochki_0
	int zvezdochki; //Кол-во звездочек
	cout << "Введите кол-во звездочек: ";
	cin >> zvezdochki;
	int stroki; //Кол-во строк
	cout << "Введите кол - во строк: ";
	cin >> stroki;
	for (int i = 1; i <= stroki; i++)
	{
		for (int j = 1; j <= zvezdochki; j++)
		{
			cout << " * "; // вывод звездочки в ряд, если endl; - в столби
		}
		cout << "\n\n";
	}
#endif
#ifdef Zvezdochki_1
	int stroki; //Кол-во строк
	cout << "Введите кол - во строк: ";
	cin >> stroki;
	for (int i = 1; i <= stroki; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " * "; // вывод звездочки в ряд, если endl; - в столби
		}
		cout << "\n\n";
	}
#endif // 
#ifdef Zvezdochki_2
	int stroki; //Кол-во строк
	cout << "Введите кол - во строк: ";
	cin >> stroki;
	for (int i = 1; i <= stroki; i++)
	{
		for (int j = 0; j <= stroki - i; ++j)
		{
			cout << " * "; // вывод звездочки в ряд, если endl; - в столби
		}
		cout << "\n\n";
	}
#endif //
#ifdef Zvezdochki_3
	int stroki; //Кол-во строк
	cout << "Введите кол - во строк: ";
	cin >> stroki;
	for (int i = 1; i <= stroki; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "   "; // вывод пробела
			
		}
		for (int y = i; y <= stroki; y++)
			cout << " * ";
		cout << "\n\n";
	}

#endif // 
#ifdef Zvezdochki_4
	int stroki; //Кол-во строк
	cout << "Введите кол - во строк: ";
	cin >> stroki;
	for (int i = 1; i <= stroki; i++)
	{
		for (int j = 1; j <= stroki - i; j++)
		{
			cout << "   "; // вывод пробела
		}
		for (int y = 1; y <= i; y++)
			cout << " * ";
		cout << "\n\n";
	}

#endif // 
#ifdef Romb
	int stroki; //Кол-во строк
	cout << "Введите кол - во строк: ";
	cin >> stroki;
	for (int i = 0; i < stroki; i++)
	{
		for (int j = i; j < stroki; j++)
		{
			cout << " ";
		}
		cout << "/";
				for (int j = 0; j < i * 2; j++)
				{
					cout << " ";
				}
				cout << "\\";
		cout << "\n";

	}
	for (int i = 0; i < stroki; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " "; // вывод пробела
		}
		cout << "\\";
		for (int j = (i + 1) * 2; j < stroki * 2; j++)
		{
			cout << " ";
		}
		cout << "/";
		cout << "\n";
	}
#endif //
#ifdef Plus_Minus
	int stroki, i, j;
	cout << "Введите кол - во строк: ";
	cin >> stroki;
	for (i = 1; i <= stroki; i++)
	{
		for (j = 1; j <= stroki; j++)
		{
			if ((i + j) % 2 == 0) {
				cout << " + "; // вывод пробела
				//cout << " - ";
			}
			else {
				cout << " - "; // вывод пробела
				//cout << " + ";
			}
		}
		cout << "\n\n";
	}
#endif
}
