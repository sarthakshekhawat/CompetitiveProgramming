// https://www.codechef.com/MARCH18B/problems/MINEAT

#include<bits/stdc++.h>
using namespace std;
#define sll(a) scanf("%lld",&a)
#define sl(a) scanf("%ld",&a)
#define si(a) scanf("%d",&a)
#define sc(a) scanf("%c",&a)
#define pll(a) printf("%lld",a)
#define pl(a) printf("%ld",a) 
#define pi(a) printf("%d",a)
#define nl printf("\n")
#define sp printf(" ")
#define ps(a) printf("%s",a)
#define pc(a) printf("%c",a)
#define f(x,y,z) for(x=y;x<z;++x)
#define rev(x,y,z) for(x=z-1;x>=y;--x)
#define mod %1000000007
#define pb push_back
#define sz size()
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;

int main()
{
	int t,n,h;
	si(t);
	while(t--)
	{
		si(n);si(h);
		int a[n];
		int i;
		f(i,0,n)
		{
			si(a[i]);
		}
		sort(a,a+n,greater<int>());
		int upperl=a[0],lowerl=1;
		int average;
		int totalh;
		while(1)
		{
			average=(upperl+lowerl)/2;
			totalh=0;
			f(i,0,n)
			{
				if(average<a[i])
					totalh+=ceil((double)a[i]/average);
				else
				{
					totalh=totalh+n-i;
					break;
				}
			}
			if(h>=totalh)
				upperl=average;
			else
				lowerl=average+1;

			if(lowerl>=upperl)
			{
				pi(upperl);
				nl;
				break;
			}
		}
	}
	return 0;
}