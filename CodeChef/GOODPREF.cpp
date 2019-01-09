// https://www.codechef.com/APRIL18A/problems/GOODPREF

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
	string s;
	int n,i;
	while(t--)
	{
		cin>>s;
		si(n);
		int arr[s.size()+1];
		arr[0]=0;
		ll total = 0;
		f(i,1,s.size()+1)
		{
			if(s[i-1]=='a')
			{
				arr[i] = arr[i-1]+1;
			}
			else
			{
				arr[i] = arr[i-1]-1;
			}
		}

		if(arr[s.size()]==0)
		{
			f(i,1,s.size()+1)
			{
				if(arr[i]>0)
					total++;
			}
			pll(total*n);nl;
		}
		else if(arr[s.size()]>0)
		{
			f(i,1,s.size()+1)
			{	
				if(arr[i]<1)
				{
					int temp = ceil((double)(1-arr[i])/arr[s.size()]);
					if(temp <= n)
						total += temp;
					else
						total += n;
				}
			}
			ll k = n*s.size() - total;
			pll(k);nl;
		}
		else
		{
			f(i,1,s.size()+1)
			{
				if(arr[i]>0)
				{
					int temp = ceil((double)(-arr[i])/arr[s.size()]);
					if(temp <= n)
						total += temp;
					else
						total += n;
				}
			}
			pll(total);nl;
		}
	}	
	return 0;
}