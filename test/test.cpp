#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	char key;
	int i=1;
	do {
		key = i;
		cout << key << "\t";
		i++
	} while (key);

}