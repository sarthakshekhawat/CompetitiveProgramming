// https://www.codechef.com/MARCH18B/problems/BIGSALE

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
	int t,n;
	si(t);
	while(t--)
	{
		si(n);
		int a[n][3];
		int i;
		f(i,0,n)
			scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
		double loss = 0;
		f(i,0,n)
		{
			loss +=  a[i][1]*a[i][0]*a[i][2]*a[i][2];
		}
		printf("%lf\n",loss/10000);
	}
	return 0;
}