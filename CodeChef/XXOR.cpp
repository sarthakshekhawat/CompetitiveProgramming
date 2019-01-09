// https://www.codechef.com/MARCH18B/problems/XXOR

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
	int n,q,l,r;
	si(n);
	si(q);
	//int a[n+1];
	int temp;
	string sa[n+1];
	int i,j;
	f(i,1,n+1)
	{
		si(temp);
		sa[i] = bitset<31>(temp).to_string();
	}
	int suma[n+1][31];
	f(i,0,31)
	{
		suma[0][i] = 0;
	}
	f(i,0,31)
	{
		f(j,1,n+1)
		{
			if(sa[j][i]=='1')
			{
				suma[j][i]=suma[j-1][i]+1;
			}
			else
			{
				suma[j][i]=suma[j-1][i];
			}
		}
	}
	while(q--)
	{
		scanf("%d %d",&l,&r);
		int answer=0;
		f(i,0,31)
		{
			if(suma[r][i]-suma[l-1][i]<ceil((double)(r-l+1)/2))
			{
				answer+=pow(2,30-i);
			}
		}
		pi(answer);nl;
	}
	return 0;
}