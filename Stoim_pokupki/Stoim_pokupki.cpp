#include<iostream>
using namespace std;
#define OFFSET "\t\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	int cena_tetr, kolvo_tetr, cena_karand, kolvo_karand, stoim_pokup;
	// ������ ������ ������
	cout << OFFSET << "���������� ��������� �������\n\n";
	cout << "������� �������� ������:" << endl;
	cout << "���� ������� (���) -> ";
	cin >> cena_tetr;
	cout << "���������� �������� (��) -> ";
	cin >> kolvo_tetr;
	cout << "���� ��������� (���) -> ";
	cin >> cena_karand;
	cout << "���������� ���������� (���) -> ";
	cin >> kolvo_karand;
	// ��������� ��������� �������
	stoim_pokup = cena_tetr * kolvo_tetr + cena_karand * kolvo_karand;
	cout << "\n";
	// ������� ����
	cout << OFFSET << "��������� �������: " << stoim_pokup << " ���\n\n";
	cout << "������� ������, ������ ���121" << endl;
}


