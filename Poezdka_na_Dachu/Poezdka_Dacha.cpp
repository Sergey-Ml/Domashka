#include<iostream>
using namespace std;
#define OFFSET "\t\t"
int main()
{
	setlocale(LC_ALL, "Russian");
	int rasstoyan, rashod, cena_benz, stoim_poezdk;
	// ������ ������ ������
	cout << OFFSET << "���������� ��������� ������� �� ���� � �������\n\n";
	cout << "������� �������� ������:" << endl;
	cout << "���������� �� ���� (��) -> ";
	cin >> rasstoyan;
	cout << "������ ������� (������ �� 100 �� �������) -> ";
	cin >> rashod;
	cout << "���� ����� ������� (���) -> ";
	cin >> cena_benz;
	// ��������� ��������� �������
	stoim_poezdk = 2 * rasstoyan * rashod * cena_benz / 100;
	cout << "\n";
	// ������� ����
	cout << OFFSET << "������� �� ���� � ������� ��������� � " << stoim_poezdk << " ���\n\n";
	cout << "������� ������, ������ ���121" << endl;
}
