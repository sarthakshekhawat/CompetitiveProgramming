// https://www.codechef.com/APRIL18A/problems/HIGHWAYC

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
	int t,n,s,y,i;
	si(t);
	while(t--)
	{
		scanf("%d%d%d",&n,&s,&y);
		int velocity[n];
		f(i,0,n)
			si(velocity[i]);
		int direction[n];
		f(i,0,n)
			si(direction[i]);
		int position[n];
		f(i,0,n)
			si(position[i]);
		int length[n];
		f(i,0,n)
			si(length[i]);
		double t0 = (y*1.0)/s;
		//double t_ans = 0.0;
		double time[2][n];
		f(i,0,n)
		{
			if(direction[i]==1)
			{
				time[0][i] = ((-position[i])*1.0)/velocity[i];
				time[1][i] = ((length[i]-position[i])*1.0)/velocity[i];
			}
			else
			{
				time[0][i] = ((position[i])*1.0)/velocity[i];
				time[1][i] = ((length[i]+position[i])*1.0)/velocity[i];
			}
			
		}
		double t_ans[n+1];
		t_ans[0] = 0.0;
		double wait0, wait1;
		f(i,0,n)
		{
			if(t_ans[i]+t0<time[0][i] || t_ans[i]>time[1][i])
			{
				t_ans[i+1] = t_ans[i] + t0; 
			}
			else
			{
				wait0 = t_ans[i];
				wait1 = time[1][i];
				while(1)
				{
					if(i>0 && wait0 <= time[1][i-1] && wait1 >= time[0][i-1])
					{
						i--;
						wait0 = t_ans[i];
						wait1 = time[1][i];
					}
					else
					{
						t_ans[i+1] = time[1][i] + t0;
						break;
					}
				} 
			}
		}
		printf("%lf\n",t_ans[n]);
	}
	return 0;
}