// https://www.codechef.com/LTIME61B/problems/SUMPOWER

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
	int t;
	si(t);
	int n,k;
	long long int power;
	string str;
	while(t--)
	{
		power = 0;
		si(n);si(k);
		cin>>str;
		int max;
		if(n-k>k)
			max = k;
		else
			max = n-k;

		for(int i=0;i<max-1;i++)
		{
			if(str[i]!=str[i+1])
			{
				power += (i+1);
				//ps("sddsdsasad  ");pi(power);ps("  sddsdsasad  \n");
			}
			if(str[str.size()-i-1]!=str[str.size()-i-2])
			{
				power += (i+1);
				//ps("sddsdsasad  ");pi(power);ps("  sddsdsasad  \n");
			}
		}
		for(int i=max-1;i<str.size()-max;i++)
		{
			if(str[i]!=str[i+1])
			{
				power += max;
			}
		}
		pll(power);nl;

	}
	return 0;
}