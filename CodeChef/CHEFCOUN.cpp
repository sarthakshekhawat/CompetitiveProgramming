// https://www.codechef.com/OCT17/problems/CHEFCOUN

#include <iostream>
using namespace std;

int main()
{
	int t,n;
	cin >> t;
	for(int z=0;z<t;z++)
	{
		cin >> n;
		cout << "1 100000";

		for(int i=2;i<n;i++)
		{
			if(n==99991)
				cout << " 42953";
			else if(n==99992 || n==99993 || n==99994)
				cout << " 42952";
			else if(n==99995 || n==99996)
				cout << " 42951";
			else if(n==99997 || n==99998)
				cout << " 42950";
			else if(n==99999 || n==100000)
				cout << " 42949";
		}
		cout << "\n";
	}
	return 0;
}