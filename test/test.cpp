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
	
	for (int i = 0; i < sdvig; i++)
		{
				array[i] = array[size-sdvig+i];

	    }

	int array_1[size] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 1; i < size-sdvig+1; i++)
	{
		array[i+sdvig-1] = array_1[i-1];
	}
	

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;
}