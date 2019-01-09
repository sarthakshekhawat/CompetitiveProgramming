// https://www.codechef.com/problems/MAXNUM3

#include <iostream>
#include <string.h>
using namespace std;
 
 
int main()
{
	int t,sum,l,check,count,count2;
	cin >> t;
	char a[444444];
	int q[444444];
	int w[444444];
	while(t--)
	{
		cin >> a;
		l = strlen(a);
		sum=0;
		for(int i=0;i<l;i++)
			sum += int(a[i])-48;
		count = 0;
		for(int i=0;i<l;i++)
		{
			if((sum - int(a[i]) +48)%3 == 0)
				q[count++] = i;
		}
 
		if(count == 0)
			cout<<"-1"<<endl;
 
 
 
		else
		{
			if(l==1)
				cout << "-1"<<endl;
			else
			{
				count2=0;
				for(int i=0;i<count;i++)
				{
					if(q[i] < l-1)
					{
						if(int(a[l-1])%2==0)
							w[count2++]=q[i];
					}
					else
					{
						if(int(a[l-2])%2==0)
							w[count2++]=q[i];
					}
				}
				if(count2==0)
					cout<<"-1"<<endl;
				else
				{
					for(int i=0;i<count2;i++)
					{
						if(int(a[w[i]])<int(a[w[i]+1]) || i+1==count2)
						{
							for(int j=0;j<l;j++)
							{
								if(w[i]!=j)
									cout << a[j];
							}
							cout <<"\n";
							break;
						}
					}
				}
			}
		}
	}
	return 0;
} 