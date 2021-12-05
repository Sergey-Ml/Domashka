#include<iostream>
	using namespace std;
	int main()
	{
		int n = 10;
		int arrays[10] = { 1,2,3,4,5,6,7,8,9,10};
		int x = arrays[0];
		for (int i = 0; i < n - 1; i++)
		{
			arrays[i] = arrays[i + 1];
		}
		arrays[n - 1] = x;
		cout << "Влево:  " << endl;
		for (int i = 0; i < n; i++)
		{
			cout << arrays[i];
		}
		
		
}