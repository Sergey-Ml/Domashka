#include<iostream>
#include<string.h>
using namespace std;
#define OFFSET "\t\t\t\t"
void ReversePrint(float arr[], int n);
float Sum(float arr[], int n);
float Avg(float[], int);
float minValueInt(float[], int);
float maxValueInt(float[], int);
//float Sort(float[], int);
//float ShiftLeft(float[], int);
//float ShiftRight(float[], int);



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
	//float reserveprint[size] = { 0 };
	//float array_rev[size] = { 0 };
	//float array_min[size] = { 0 };
	//float array_max[size] = { 0 };
	//float array_sort[size] = { 0 };
	//float array_left[size] = { 0 };
	//float array_right[size] = { 0 };
	for (int i = 0; i < razm; i++)
	{
		cout << "������� " << i + 1 << "-� ������� ������� : ";
		cin >> array[i];
	}
	cout << "--------------------------------------------\n\n";
	cout << "��������� ������: ";
	// ����� ������� ��� ������ �������� �-���
	//memcpy(array_rev, array, sizeof(array_rev));
	//memcpy(array_min, array, sizeof(array_min));
	//memcpy(array_max, array, sizeof(array_max));
	//memcpy(array_sort, array, sizeof(array_sort));
	//memcpy(array_left, array, sizeof(array_left));
	//memcpy(array_right, array, sizeof(array_right));
	for (int i = 0; i < razm; i++)
	{
		cout << array[i] << " ";
	}
	cout << "\n\n";
	float reverseprint = ReversePrint(array, razm);
	cout << "\n\n";
	float sum = Sum(array, razm);
	cout << "\n\n";
	float avg = Avg(array, razm);
	cout << "\n";
	float minvalueint = minValueInt(array, razm);
	cout << "\n";
	float maxvalueint = maxValueInt(array, razm);
	cout << "\n";
	//float sort = Sort(array, razm);
	//cout << "\n";
	//float shiftleft = ShiftLeft(array, razm);
	//cout << "\n";
	//float shiftright = ShiftRight(array, razm);
	//cout << "\n";

	cout << "---------�����-----------" << endl;
	cout << "�������� �����: " << reverseprint << endl;
	cout << "����� ��������� �������: " << sum << endl;
	cout << "������� ��������������: " << avg << endl;
	cout << "����������� ��������: " << minvalueint << endl;
	cout << "������������ ��������: " << maxvalueint << endl;
	//cout << "����������: " << sort;
	//cout << "����� �����: " << shiftleft;
	//cout << "����� ������: " << shiftright;


	// �������� �������

	/*for (int i = 0; i < razm; i++)
	{
		cout << array_left[i] << " ; " << endl;
	}
	*/
}


void ReversePrint(float arrays[], int razm)
{
	cout << "�������� �����: ";
	float b = 0; int c = 0; int i;
	for (int i = 0; i < (razm / 2); i++)
	{
		b = arrays[razm - i - 1];
		arrays[razm - i - 1] = arrays[i];
		arrays[i] = b;
	}

	for (i = 0; i < razm; i++)
	{
		c = arrays[i];
		cout << c << " + ";
	}
}

float Sum(float array_sum[], int razm)
{
	float summa = 0;
	for (int i = 0; i < razm; i++)
	{
		summa += array_sum[i];
	}
	//cout << "����� ��������� �������: " << summa;
	return summa;
}
float Avg(float array_avg[], int razm)
{
	float summa = 0, srednee;
	for (int i = 0; i < razm; i++)
	{
		summa += array_avg[i];
	}
	srednee = summa / razm;
	return srednee;
	//cout << "������� �������������� ��������� �������: " << srednee << endl;
}
float minValueInt(float array_min[], int razm)
{
	float min = array_min[0];
	for (int i = 0; i < razm; i++)
	{
		if (min > array_min[i])
			min = array_min[i];
	}
	//cout << "����������� ��������: " << min << endl;
	return min;
}
float maxValueInt(float array_max[], int razm)
{
	float max = array_max[0];
	//float array_max[4] = { 1,2,3,8 };
	for (int i = 0; i <= razm; ++i)
	{
		if (max < array_max[i])
			max = array_max[i];
	}
	//cout << "������������ ��������: " << max <<endl;
	return max;
}
/*
float Sort(float array_sort[], int razm)
{
	cout << "���������� �� �����������: ";
	for (int i = 0; i < razm; i++)
	{
		int min = i;
		for (int j = i + 1; j < razm; j++)
		{
			if (array_sort[j] < array_sort[min])
				min = j;
		}
		float tmp_sort = array_sort[i];
		array_sort[i] = array_sort[min];
		array_sort[min] = tmp_sort;
		return array_sort[i];
	}
	cout << endl;
}
float ShiftLeft(float array_left[], int razm)
{
	cout << "������� ����� ������ �����:\n\n";
	int sdvig;
	cin >> sdvig;
	cout << "����������� ����� �� " << sdvig << " ��������(��) �����:\n\n";
	for (int j = 1; j <= sdvig; ++j)
	{
		float x = array_left[0];
		for (int i = 0; i < razm - 1; i++)
		{
			array_left[i] = array_left[i + 1];
		}
		array_left[razm - 1] = x;
	}
	for (int i = 0; i < razm; i++)
	{
		return array_left[i];
	}
	cout << endl;
}
float ShiftRight(float array_right[], int razm)
{
	cout << "������� ����� ������ ������:\n\n";
	int sdvig;
	cin >> sdvig;
	cout << "����������� ����� �� " << sdvig << " ��������(��) ������: \n\n";
	for (int j = 1; j <=sdvig; j++)
	{
		float x = array_right[razm-1];
		for (int i = razm-1; i >=0; i--)
		{
			array_right[i+1] = array_right[i];
		}
		array_right[0] = x;
	}
	for (int i = 0; i < razm; i++)
	{
		return array_right[i];
	}

	cout << "\n\n\n";
	cout << OFFSET << "======================================================\n\n";
	cout << OFFSET << "     �������� ������� � 8 (�������-�������)\n\n";
	cout << OFFSET << "        (������� ������, ������ ���121)\n\n";
	cout << OFFSET << "======================================================\n\n\n";
}
*/