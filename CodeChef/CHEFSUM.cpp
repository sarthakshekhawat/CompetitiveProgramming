// https://www.codechef.com/SEPT17/problems/CHEFSUM

#include<iostream>
using namespace std;

int main()
{
	int t;
	long n,array[1111111],min;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		cin >> n;
		for(long j=1;j<=n;j++)
		{
			cin >> array[j];
		}

		min = 1;
		for(long j=2;j<=n;j++)
		{
			if(array[min] > array[j])
				min = j;
		}
		cout << min << endl;
	}
	return 0;
}