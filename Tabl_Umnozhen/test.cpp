#include<iostream>
using namespace std;
int main()
{
	int i, j;
	for (i = 2; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			cout << i << " * " << j << " = " << i * j << "\n\t" << endl;
		}
		cout << endl;
	}
}