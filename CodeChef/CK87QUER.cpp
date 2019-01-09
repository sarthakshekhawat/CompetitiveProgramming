// https://www.codechef.com/COOK87/problems/CK87QUER
#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	long t;
	cin >> t;
	long y;
	long b;
	long a;
	long count;
	
	for(long z=0;z<t;z++)
	{
		cin >> y;
		count = 0;
		if(y>700)
			b=700;
		else
			b=y-1;

		for(long i=1;i<=b;i++)
		{
			a = sqrt(y-i);

			count=count+(a);
		}

		cout << count <<  endl;

	}
	return 0;
}