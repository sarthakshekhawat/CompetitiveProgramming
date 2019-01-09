// https://www.codechef.com/NOV17/problems/VILTRIBE

#include <iostream>
//#include <bits/stdc++.h>
//#include <string>
using namespace std;
//char A[100000];
//char B[100000];
int countA;
int countB;
int count;

int main()
{
	int t;
	cin >> t;
	char c;
	char trash = cin.get();
	while(t--)
	{
		countA=0;
		countB=0;
		count=0;
		char start = '0';
		//char end = '.';
		while((c=cin.get())!='\n')
		{
			if(c=='.')
				count++;
			else if(c=='A')
			{	
				countA++;
				if(start=='A')
					countA += count;
				start ='A';
				count = 0;
			}
			else
			{
				countB++;
				if(start=='B')
					countB += count;
				start = 'B';
				count = 0;
			}
		}
		cout <<countA<<"  "<<countB<<endl;

	}
	return 0;
}