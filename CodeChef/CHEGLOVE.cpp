// https://www.codechef.com/MARCH18B/problems/CHEGLOVE

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
		int a[n],b[n];
		int i;
		f(i,0,n)
		{
			si(a[i]);
		}
		f(i,0,n)
			si(b[i]);
		int flag1=1,flag2=1;
		f(i,0,n)
		{
			if(a[i]>b[i])
			{
				flag1=0;
				break;
			}
		}
		f(i,0,n)
		{
			if(a[i]>b[n-i-1])
			{
				flag2=0;
				break;
			}
		}
		if(flag2==0&&flag1==0)
			ps("none\n");
		else if(flag2==1&&flag1==0)
			ps("back\n");
		else if(flag2==1&&flag1==1)
			ps("both\n");
		else
			ps("front\n");
	}
	return 0;
}