// https://www.codechef.com/NOV17/problems/POLY

#include <iostream>
using namespace std;

int main()
{
	int t,q,n;
	long x,min,calculate;
	cin >> t;
	while(t--)
	{
		cin>>n;
		int array[n][4];
		for(int i=0;i<n;i++)
			cin>>array[i][0]>>array[i][1]>>array[i][2]>>array[i][3];
		cin>>q;
		for(int i=0;i<q;i++)
		{
			cin>>x;
			min=9223372036854775807;
			//min = 99999999;
			for(int j=0;j<n;j++)
			{
				calculate=(array[j][0]) + (x*array[j][1]) + (x*x*array[j][2]) + (x*x*x*array[j][3]);
				if(calculate<min)
					min=calculate;
			}
			cout<<min<<endl;
		}
	}
	return 0;
}