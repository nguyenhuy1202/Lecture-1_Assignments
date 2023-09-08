#include<bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n)
{
	int i, j, min;
	
	for (i = 0; i < n - 1; i++ )
	{
		min = i;
		for( j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min])
			min = j;
		}
		
		if (min != i)
			swap(arr[min], arr[i]);
	}
}

void print(int arr[], int size)
{
	int i;
	for (i = 0; i < size ; i++)
	{
		cout << arr[i] << " ";
		
	}
}

int main()
{
	int	n;
	cin >> n;
	int num[n];
	for (int i = 0; i < n; i++ )
	{
		cin >> num[i];
	}
	selectionSort(num, n);
	print(num,n);
	return 0;
}
