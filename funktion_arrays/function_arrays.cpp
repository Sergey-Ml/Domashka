#include<iostream>
using namespace std;
#define OFFSET "\t\t\t\t"
//int ReservePrint(int n);
//float Sum(int i, int razm, float array[]);
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << OFFSET << "========================================================\n\n";
	cout << OFFSET << "          ������ Function/Arrays \n\n  ";
	cout << OFFSET << "========================================================\n\n\n";
	cout << "������� ������ ������� (�� ������ 100):  ";
	int razm;
	cin >> razm;
	cout << endl;
	while (razm > 100 || razm <= 0)
	{
		cout << "������ ������� ����� ���� �� 1 �� 100!" << endl;
		cout << "������� �����: ";
		cin >> razm;
	}
	const int size = 100;
	float array[size] = { 0 };
	for (int i = 0; i < razm; i++)
	{
		cout << "������� " << i + 1 << "-� ������� ������� : ";
		cin >> array[i];
	}
	cout << "--------------------------------------------\n\n";
	cout << "��������� ������: ";
	for (int i = 0; i < razm; i++)
	{

		//cout << array[i] << " ";
	}

	//cout << endl;

	//cout << "����� ��������� �������: " <<  << endl;
}

/*int ReservePrint(int n)
{

}
*/
//float Sum(int i, int razm, float array[])
//{
	// float summa=0;
	 //for (i = 0; i < razm; i++)
	 //{
		// summa += array[i];
	 //}
	 //return summa;
//}
