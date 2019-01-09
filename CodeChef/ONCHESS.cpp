// https://www.codechef.com/COOK88/problems/ONCHESS

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long t;
	cin>>t;
	int n;
	long a[1000][6];
	string s;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
			cin>>s;
			if(s=="rated")
				a[i][4]=1;
			else if(s=="unrated")
				a[i][4]=2;

			cin>>s;
			if(s=="random")
				a[i][5]=1;
			else if(s=="white")
				a[i][5]=2;
			else if(s=="black")
				a[i][5]=3;
		}
		long pair[n]={0};
		cout<<"wait"<<endl;

		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(a[i][3]==a[j][3] && pair[j]==0)
				{
					if(a[i][4]==a[j][4])
					{
						if((a[i][5]==1 && a[j][5]==1) || (a[i][5]==2 && a[j][5]==3) || (a[i][5]==3 && a[j][5]==2))
						{
							if((a[i][0]>=a[j][1] && a[i][0]<=a[j][2]) && (a[j][0]>=a[i][1] && a[j][0]<=a[i][2]))
							{
								cout<<j+1<<endl;
								pair[i]=1;
								pair[j]=1;
								break;
							}
						}
					}
				}
				if(j==i-1)
					cout<<"wait"<<endl;
			}
		}
	}
	return 0;
}