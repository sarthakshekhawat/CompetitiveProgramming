// https://www.codechef.com/MARCH18B/problems/MINVOTE

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
		ll influnce[n];
		int infl[n];
		int i,j,temp;
		si(infl[0]);
		influnce[0]=infl[0];
		f(i,1,n)
		{
			si(infl[i]);
			influnce[i]=infl[i]+influnce[i-1];
		}
		int vote[n]={0};
		f(i,0,n)
		{
			rev(j,0,i)
			{
				if(influnce[i-1]-influnce[j]<infl[i])
					vote[j]++;
				else
				{
					if(influnce[i-1]-influnce[j]==infl[i])
						vote[j]++;
					break;
				}
			}
			f(j,i+1,n)
			{
				if(influnce[j-1]-influnce[i]<infl[i])
					vote[j]++;
				else
				{
					if(influnce[j-1]-influnce[i]==infl[i])
						vote[j]++;
					break;
				}
			}
		}
		f(i,0,n)
		{
			printf("%d ",vote[i]);
		}nl;
	}
	return 0;
}