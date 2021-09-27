#include<iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
	int sdvig;
	
	const int size = 10;
	int array[size] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
		
	}
	cin >> sdvig;
	cout << endl;
	int b;

	for (int i = 0; i < sdvig; i++)
		{
			b = array[size - sdvig];
			array[size - sdvig] = array[i];
			array[i] = b;
		}

	

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;
}