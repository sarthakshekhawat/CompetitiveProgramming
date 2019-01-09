// https://www.codechef.com/COOK89/problems/FBMT

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long t,cA,cB;
	cin >>t;
	long n;
	char s[25],A[25],B[25];
	while(t--)
	{
		cin >> n;
		if(n>0)
			cin >> A;
		cA = 1;
		cB = 0;
		for(long i=1;i<n;i++)
		{
			cin >> s;
			if(!(strcmp(A, s)))
				cA++;
			else if(cB==0)
			{
				strcpy(B,s);
				//B = s;
				cB++;
			}
			else
				cB++;
		}
		if(n==0)
			cout<<"Draw"<<endl;
		else if(cA>cB)
			cout<<A<<endl;
		else if(cA<cB)
			cout<<B<<endl;
		else
			cout<<"Draw"<<endl;
	}
	return 0;
}