// https://www.codechef.com/LTIME61B/problems/NUM239

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
	int l,r;
	int t;
	cin>>t;
	int count;
	while(t--)
	{
		count=0;
		int start,end;
		int total = r-l+1;
		si(l);si(r);
		if(r-l+1>10)
		{
			start = l;
			while(start%10!=0)
			{
				if(start%10==2||start%10==3||start%10==9)
					count++;
				start++;
			}
			//start++;

			end = r;
			while(end%10!=0){
				if(end%10==2||end%10==3||end%10==9)
					count++;
				end--;
			}

			int remain = ((end - start)/10)*3;

			count = count + remain;

		}
		else
		{
			for(int i=l;i<=r;i++)
			{
				if(i%10==2||i%10==3||i%10==9)
					count++;
			}
		}
		pi(count);nl;
	}
	return 0;
}