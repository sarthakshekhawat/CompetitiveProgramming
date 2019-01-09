// https://www.codechef.com/problems/PCJ18C

#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

long long gcd( long long x, long long y )
{
	if(x==0 || y==0)
		return 0;
	if(x==y)
		return x;
	if(x>y)
		return gcd(x-y,y);
	return gcd(x,y-x);
}

int main()
{
	int t;
	cin>> t;
	int k,n;
	long long A;
	while(t--)
	{
		long long x,y;
		cin>>n>>A>>k;
		x = n*(n-1)*A +(k-1)*(360*n-720-2*A*n);
		y = n*(n-1);
		long long ggccdd = gcd(x,y);
		cout<<x/ggccdd<<" "<<y/ggccdd<<endl;
	}
	return 0;

}