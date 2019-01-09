// https://www.codechef.com/COOK95B/problems/NUMCOMP

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
#define ps(a) printf("%s\n",a)
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
	int t;
	si(t);
	int a,b,n;
	while(t--)
	{
		si(a);si(b);si(n);
		if(a>=0 && b>=0)
		{
			if(a>b)
				ps("1");
			else if(a<b)
				ps("2");
			else
				ps("0");
		}
		else if(a<0 && b>=0)
		{
			if(n%2==0)
			{
				if((-1*a)>b)
					ps("1");
				else if((-1*a)<b)
					ps("2");
				else
					ps("0");
			}
			else
			{
				ps("2");
			}
		}
		else if(a>=0 && b<0)
		{
			if(n%2==0)
			{
				if(a>(-1*b))
					ps("1");
				else if(a<(-1*b))
					ps("2");
				else
					ps("0");
			}
			else
			{
				ps("1");
			}
		}
		else
		{
			if(n%2==0)
			{
				if(-1*a>-1*b)
					ps("1");
				else if(-1*a<-1*b)
					ps("2");
				else
					ps("0");
			}
			else
			{
				if(a>b)
					ps("1");
				else if(a<b)
					ps("2");
				else
					ps("0");
			}
		}
	}
	return 0;
}