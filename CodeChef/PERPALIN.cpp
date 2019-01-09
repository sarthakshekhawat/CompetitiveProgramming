// https://www.codechef.com/NOV17/problems/PERPALIN

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t,n,p,l;
	cin >> t;
	while(t--)
	{
		cin >> n >> p;
		if(p==1 || p==2)
			cout <<"impossible"<<endl;
		else
		{
			l=n/p;
			string s(p,'b');
			s[0] = 'a';
			s[p-1] = 'a';
			for(int i=0;i<l;i++)
				cout << s;
			cout << endl;
		}
	}
	return 0;
}