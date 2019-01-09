// https://www.codechef.com/JULY18B/problems/MGCSET

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
	int t,n,m;
	si(t);
	while(t--)
	{
		si(n);si(m);
		int count=0;
		for(int i=0;i<n;i++)
		{
			int temp;
			si(temp);
			if(temp%m==0)
				count++;
		}
		ll ans = pow(2,count) -1;
		pll(ans);nl;
	}
	return 0;
}