#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n1, n2, GCD;
	cin >> n1 >> n2;
	int temp;
	
	//doi bien n1 va n2 trong truong hop n2 lon hon n1
	if ( n2 > n1)
	{
		n2 = n1;
		n1 = temp;
	
	}
	for(int i = 1; i <= n2; i++)
	{
		if (n1 % i ==0 && n2 % i == 0)
		{
			GCD = i;
		}
	}
	
	cout << GCD;
	
	return 0;
}
