// https://www.codechef.com/DEC17/problems/GIT01

#include <iostream>
using namespace std;

int main ()
{
	int t,row,column,min_r,min_g,n,m;
	char a;
	cin >> t;
	while(t--)
	{
		row=0;
		column=0;
		min_g=0;
		min_r=0;

		cin>>n>>m;
		for(int j=0;j<n;j++)
		{
			for(int i=0;i<m;i++)
			{
				cin>>a;
				//for min_r "0" is red and "1" is green
				///for min_g "0" is green and "1" is red
				if(column==0)
				{
					if(a=='G')
						min_r+=3;
					else
						min_g+=5;
					column = 1;
				}
				else
				{
					if(a=='R')
						min_r+=5;
					else
						min_g+=3;
					column = 0;
				}
			}
			if(row==0)
				row=column=1;
			else
				row=column=0;
		}
		if(min_r<min_g)
			cout<<min_r<<endl;
		else
			cout<<min_g<<endl;
	}	
	return 0;
}
