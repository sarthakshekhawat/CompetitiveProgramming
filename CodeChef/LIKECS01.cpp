//https://www.codechef.com/COOK86/problems/LIKECS01

#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	char c[101];
	for(int i=0;i<t;i++)
	{
		cin>> c;
		int a[26] = {0};

		int j=0;
		while(c[j]!='\0')
		{
			a[int(c[j])-97]++;
			j++;
			//cout << int(a[j]);
		}
		int k=0,l=0;

		for(int q=0;q<26;q++)
		{
			if(a[q]>1)
			{
				k=1;
				break;
			}
		}

		if(k==1)
			cout<< "yes";
		else
			cout << "no";
		cout <<"\n";

	}
	return 0;

}
