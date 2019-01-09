// https://www.codechef.com/problems/LISDIGIT

#include <iostream>
using namespace std;

int main()
{
	int t,n;
	char s[10];
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i=0;i<n;i++)
			cin >> s[i];
		s[n] = '\0';

		cout<<s<<endl;
	}
	return 0;
}