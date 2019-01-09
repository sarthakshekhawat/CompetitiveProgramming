//https://www.codechef.com/COOK97B/problems/BFTT

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
#define mod 1000000007
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
	ll n;
	while(t--)
	{
		sll(n);

		while(1)
		{
			n++;
			stringstream ss;
			ss<<n;
			string str = ss.str();
			int count=0;
			for(int i=0;i<str.size();i++)
			{
				if(str[i]=='3')
				{
					count++;
				}
			}
			if(count>=3)
				break;
		}
		pll(n);nl;
	}
	return 0;
}