// https://www.codechef.com/JULY18B/problems/NMNMX

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
#define mod 1000000007
#define pb push_back
#define sz size()
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;

ll moduloPower(ll a, ll b)
{
    long long x=1, y=a; 
    while (b > 0) {
        if (b%2 == 1) {
            x = (x*y) % mod;
        }
        y = (y*y) % mod;
        b /= 2;
    }
    return x % mod;
}

/*void gcdExtended(ll a, ll b, ll *x, ll *y)
{
    if (a == 0)
    {
        *x = 0, *y = 1;
        return;
    }
 
    ll x1, y1;
    gcdExtended(b%a, a, &x1, &y1);
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return;
}*/

/*ll modInverse(ll b)
{
    ll x, y; 
    gcdExtended(b, (mod-1), &x, &y);
    return (x%(mod-1) + (mod-1)) % (mod-1);
}*/

int main()
{
	ll t,n,k;
	sll(t);
	//ll permute[5001][5001];
	vector<vector<long long int> > permute(5001);

	for(int i=0;i<5001;i++)
	{
		permute[i].resize(i+1);
		permute[i][0] = 1;
		permute[i][i] = 1;
	}
	for(int i=2;i<=5000;i++)
	{
		for(int j=1;j<i;j++)
		{
			permute[i][j] = (permute[i-1][j] + permute[i-1][j-1])%(mod-1);
		}
	}
	while(t--)
	{
		sll(n);sll(k);
		ll arr[n];
		for(int i=0;i<n;i++)
		{
			sll(arr[i]);
		}
		sort(arr, arr + n);
		long long int series[n]={0};
		long long int q = k-1;
		for(int i=k-1;i<n;i++)
		{
			series[i]= permute[i][k-1];
		}
		ll series2[n];
		for(int i=0;i<n;i++)
		{
			series2[i] = (series[i] + series[n-1-i])%(mod-1);
		}
		ll repetition[n];
		for(int i=0;i<n;i++)
		{
			repetition[i] = (series[n-1] - series2[i] + mod-1)%(mod-1);
		}
		
		ll ans = 1;
		for(int i=1;i<n-1;i++)
		{
			ll temp = moduloPower(arr[i], repetition[i]);
			ans = (ans * temp)%mod;
		}

		pll(ans);nl;
	}
	return 0;
}