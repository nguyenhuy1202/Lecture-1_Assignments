#include<iostream>

using namespace std;

double minmax(double arr[],int n)
{
	double min = arr[0];
	double max = arr[0];
	double tong = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
		tong = min + max;
	}
	return tong;
}

int main()
{
	int n = 5;
	double num[n];
	double tong;
	for(int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	tong = minmax(num,n);
	cout << tong << endl;
	return 0;
}

