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
	int zvezdochki; //���-�� ���������
	cout << "������� ���-�� ���������: ";
	cin >> zvezdochki;
	int stroki; //���-�� �����
	cout << "������� ��� - �� �����: ";
	cin >> stroki;
	for (int i = 1; i <= stroki; i++)
	{
		for (int j = 1; j <= zvezdochki; j++)
		{
			cout << " * "; // ����� ��������� � ���, ���� endl; - � ������
		}
		cout << "\n\n";
	}
#endif
#ifdef Zvezdochki_1
	int stroki; //���-�� �����
	cout << "������� ��� - �� �����: ";
	cin >> stroki;
	for (int i = 1; i <= stroki; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " * "; // ����� ��������� � ���, ���� endl; - � ������
		}
		cout << "\n\n";
	}
#endif // 
#ifdef Zvezdochki_2
	int stroki; //���-�� �����
	cout << "������� ��� - �� �����: ";
	cin >> stroki;
	for (int i = 1; i <= stroki; i++)
	{
		for (int j = 0; j <= stroki - i; ++j)
		{
			cout << " * "; // ����� ��������� � ���, ���� endl; - � ������
		}
		cout << "\n\n";
	}
#endif //
#ifdef Zvezdochki_3
	int stroki; //���-�� �����
	cout << "������� ��� - �� �����: ";
	cin >> stroki;
	for (int i = 1; i <= stroki; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "   "; // ����� �������
			
		}
		for (int y = i; y <= stroki; y++)
			cout << " * ";
		cout << "\n\n";
	}

#endif // 
#ifdef Zvezdochki_4
	int stroki; //���-�� �����
	cout << "������� ��� - �� �����: ";
	cin >> stroki;
	for (int i = 1; i <= stroki; i++)
	{
		for (int j = 1; j <= stroki - i; j++)
		{
			cout << "   "; // ����� �������
		}
		for (int y = 1; y <= i; y++)
			cout << " * ";
		cout << "\n\n";
	}

#endif // 
#ifdef Romb
	int stroki; //���-�� �����
	cout << "������� ��� - �� �����: ";
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
			cout << " "; // ����� �������
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
	cout << "������� ��� - �� �����: ";
	cin >> stroki;
	for (i = 1; i <= stroki; i++)
	{
		for (j = 1; j <= stroki; j++)
		{
			if ((i + j) % 2 == 0) {
				cout << " + "; // ����� �������
				//cout << " - ";
			}
			else {
				cout << " - "; // ����� �������
				//cout << " + ";
			}
		}
		cout << "\n\n";
	}
#endif
}
