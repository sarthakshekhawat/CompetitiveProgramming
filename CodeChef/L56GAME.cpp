//https://www.codechef.com/LTIME56/problems/L56GAME

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
	cin >> t;
	int n,temp;
	while(t--)
	{
		si(n);
		int count=0;
		if(n==1)
		{
			si(temp);
			printf("1\n");
		}
		else

		{
		while(n--)
		{
			si(temp);
			temp = temp%2;
			if(temp==1)
			{
				count++;
			}
		}
		count = count%2;
			if(count==1)
			{
				printf("2\n");
			}
			else
			{
				printf("1\n");
			}
		}
	}
	return 0;
}