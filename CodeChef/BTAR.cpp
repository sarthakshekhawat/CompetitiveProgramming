// https://www.codechef.com/COOK89/problems/BTAR

#include <iostream>
using namespace std;

int main()
{
	long t,n;
	long temp;
	cin >>t;
	while(t--)
	{
		long c1=0,c2=0,c3=0;
		cin >> n;
		//long A[n];
		for(long i=0;i<n;i++)
		{
			cin >> temp;
			temp = temp%4;
			if(temp==1)
				c1++;
			else if(temp==2)
				c2++;
			else if(temp==3)
				c3++;
		}
		if(c1==c3)
		{
			if(c2%2==0)
			{
				cout<<c1+(c2/2)<<endl;
			}
			else
			{
				cout<<"-1"<<endl;	
			}
		}
		else if(c1>c3)
		{
			if((c1-c3)%2==0)
			{
				if((c1-c3)%4==0)
				{
					if(c2%2==0)
						cout<<c3+(((c1-c3)/4)*3)+(c2/2)<<endl;
					else
						cout<<"-1"<<endl;
				}
				else
				{
					if(c2%2!=0)
						cout<<c3+(((c1-c3-2)/4)*3)+((c2-1)/2)+2<<endl;
					else
						cout<<"-1"<<endl;	
				}
			}
			else
			{
				cout<<"-1"<<endl;
			}

		}
		else
		{
			if((c3-c1)%2==0)
			{
				if((c3-c1)%4==0)
				{
					if(c2%2==0)
						cout<<c1+(((c3-c1)/4)*3)+(c2/2)<<endl;
					else
						cout<<"-1"<<endl;
				}
				else
				{
					if(c2%2!=0)
						cout<<c1+(((c3-c1-2)/4)*3)+((c2-1)/2)+2<<endl;
					else
						cout<<"-1"<<endl;	
				}
			}
			else
			{
				cout<<"-1"<<endl;
			}

		}
	}
	return 0;
}