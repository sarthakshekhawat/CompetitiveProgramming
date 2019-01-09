// https://www.codechef.com/problems/ALTARAY
#include <iostream>
using namespace std;

int main()
{
	int t,n,count,mark,i;
	long data;
	cin >> t;
	while(t--)
	{
		cin >> n;
		mark=0;

		cin >> data;
		if(data>0)
			mark = 1;
		else
			mark = -1;
		count=1;

		for(i=1;i<n;i++)
		{
			cin >> data;
			if(data>0 && mark==-1)
			{
				count++;
				mark = 1;
			}
			else if(data<0 && mark==1)
			{
				count++;
				mark = -1;
			}
			else
			{
				for(int j=count;j>0;j--)
				{
					cout<<j<<" ";
				}
				if(data>0)
					mark = 1;
				else
					mark = -1;
				count = 1;
			}
		}
		for(int j=count;j>0;j--)
		{
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	return 0;
}