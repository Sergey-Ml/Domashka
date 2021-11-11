#include<iostream>
	using namespace std;
	void print(int[]);
	int main()
	{
		int nums[] = { 1,2,3,4,5 };
		print(nums);
		return 0;
	}

	void print(int numbers[])
	{
		int sum = 0;
		for (int i = 0; i < 5; i++) 
		{
			sum += numbers[i];
			cout << ": " << numbers[i];
		}
		cout << ": " << sum;
	}
