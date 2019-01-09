// https://www.codechef.com/LTIME61B/problems/DOCSDEL

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
	int t,n,m,q,l,r;
	si(t);
	while(t--)
	{
		si(n);si(m);
		int matrix[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				si(matrix[i][j]);
			}
		}
		si(q);
		int B[m];
		while(q--)
		{
			si(l);si(r);
			l--;
			r--;
			for(int i=0;i<m;i++)
			{
				B[i] = matrix[l][i];
			}
			for(int j=0;j<m;j++)
			{
				for(int i=l+1;i<=r;i++)
				{
					B[j] = matrix[i][B[j]-1];
				}
			}

			/*for(int i=0;i<m;i++)
			{
				pi(B[i]);sp;
			}nl;*/
			long long int ans=0;
			for(int i=1;i<=m;i++)
			{
				ans += B[i-1]*i;
			}
			pll(ans);nl;
		}
	}
	return 0;
}