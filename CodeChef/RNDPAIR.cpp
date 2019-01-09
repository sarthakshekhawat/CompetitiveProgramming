//https://www.codechef.com/COOK88/problems/RNDPAIR

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long t;
	cin>>t;
	long a[10000];
	int n;
	long count;
	while(t--)
	{
		cin >> n;
		count =0;
		int maxi=0,maxj=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int max=a[0]+a[1];
		long maxc=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(max<a[i]+a[j])
				{
					maxc=1;
					max=a[i]+a[j];
				}
				else if(max==a[i]+a[j])
				{
					maxc++;
				}
			}
		}
		long total =(n*(n-1))/2;
		double ans = (maxc*1.0)/total;
		cout<< setprecision(9)<<ans<<endl;
	}
	return 0;
}