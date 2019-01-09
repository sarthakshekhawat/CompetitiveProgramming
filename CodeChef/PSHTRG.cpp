// https://www.codechef.com/MARCH18B/problems/PSHTRG

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
	int n,q;
	si(n);
	si(q);
	ll a[n];
	int i;
	f(i,0,n)
	{
		sll(a[i]);
	}
	int x,y,z;
	while(q--)
	{
		scanf("%d%d%d",&x,&y,&z);	
		if(x==1)
		{
			a[y-1] = z;
		}
		else
		{
			if(z-y+1>2)
			{
				int flag=0;
				ll b[z-y+1];
				//copy(a+y-1,a+z,b);
				f(i,0,z-y+1)
				{
					b[i] = a[i+y-1];
				}
				sort(b,b+z-y+1,greater<int>());
				f(i,0,z-y-1)
				{
					if(b[i]<(b[i+1]+b[i+2]))
					{
						printf("%lld\n",b[i]+b[i+1]+b[i+2]);
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					printf("0\n");
				}
			}
			else
			{
				printf("0\n");
			}

		}
	}
	return 0;
}