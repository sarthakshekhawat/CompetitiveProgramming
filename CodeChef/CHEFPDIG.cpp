// https://www.codechef.com/SEPT17/problems/CHEFPDIG

#include<iostream>
using namespace std;

int main()
{
	int T;
	char digit,temp;
	int alphabet[26];
	cin >> T;
	temp=cin.get();
	for(int t=0;t<T;t++)
	{
		for(int j=0;j<26;j++)
			alphabet[j]=0;

		long integer[10]={0};

		
		while((digit=cin.get())!='\n')
		{
			integer[int(digit)-48]++;
		}
		if(integer[6]>=1)
		{
			for(int i=5;i<=9;i++)
			{
				if(integer[i]>=1)
				{
					if(i!=6 || integer[6]>=2)
						alphabet[i-5]=1;
				}
			}
		}

		if(integer[7]>=1)
		{
			for(int i=0;i<=9;i++)
			{
				if(integer[i]>=1)
				{
					if(i!=7 || integer[7]>=2)
						alphabet[i+5]=1;
				}
			}
		}

		if(integer[8]>=1)
		{
			for(int i=0;i<=9;i++)
			{
				if(integer[i]>=1)
				{
					if(i!=8 || integer[8]>=2)
						alphabet[i+15]=1;
				}
			}
		}

		if(integer[9]>=1)
		{
			if(integer[0]>=1)
				alphabet[25]=1;
		}

		for(int j=0;j<26;j++)
		{
			if(alphabet[j]==1)
			{
				cout << char(j+65);
			}
		}
		cout << "\n";
	}
	return 0;
}