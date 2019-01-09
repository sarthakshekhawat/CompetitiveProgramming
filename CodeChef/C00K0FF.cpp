// https://www.codechef.com/LTIME52/problems/C00K0FF

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	long t,n;
	char str[30];
	cin >> t;
	for(long z=0;z<t;z++)
	{
		int count[5]={0};
		cin >> n;
		for(long x=0 ; x<n;x++)
		{
			cin>> str;

			if(strcmp(str, "cakewalk")==0)
				count[0] = 1;
			else if(strcmp(str,"simple")==0)
				count[1] = 1;
			else if(strcmp(str, "easy")==0)
				count[2] = 1;
			else if(strcmp(str, "easy-medium")==0 || strcmp(str, "medium")==0)
				count[3] = 1;
			else if(strcmp(str, "medium-hard")==0 || strcmp(str, "hard")==0)
				count[4] = 1;
		}
		int c=0;
		for(int k=0;k<5;k++)
		{
			if(count[k]==1)
				c++;
		}
		if(c==5)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}

	return 0;
}