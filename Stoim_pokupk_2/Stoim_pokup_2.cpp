#include<iostream>
using namespace std;
#define OFFSET "\t\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	int cena_tetr, kolvo, cena_obl, stoim_pokup;
	// ������ ������ ������
	cout << OFFSET << "���������� ��������� �������\n\n";
	cout << "������� �������� ������:" << endl;
	cout << "���� ������� (���) -> ";
	cin >> cena_tetr;
	cout << "���� ������� (���) -> ";
	cin >> cena_obl;
	cout << "���������� ���������� (��) -> ";
	cin >> kolvo;
	// ��������� ��������� �������
	stoim_pokup = (cena_tetr + cena_obl) * kolvo;
	cout << "\n";
	// ������� ����
	cout << OFFSET << "��������� �������: " << stoim_pokup << " ���\n\n";
	cout << "������� ������, ������ ���121" << endl;
}

