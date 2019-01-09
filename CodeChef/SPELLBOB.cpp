// https://www.codechef.com/problems/SPELLBOB

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int a,b,c;
	while(t--)
	{
		string top,bottom;
		cin>>top>>bottom;
		a=b=c=0;
		for(int i=0;i<3;i++)
		{
			if(top[i]=='b')
			{
				if(bottom[i]=='b')
					a++;
				else if(bottom[i]=='o')
					c++;
				else
					a++;
			}
			else if(top[i]=='o')
			{
				if(bottom[i]=='b')
					c++;
				else if(bottom[i]=='o')
					b++;
				else
					b++;
			}
			else
			{
				if(bottom[i]=='b')
					a++;
				else if(bottom[i]=='o')
					b++;
			}
		}

		if(a>2 || b>1)
			cout<<"no"<<endl;
		else
		{
			if(c+a-2==1-b)
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
		}
	}
	return 0;
}