// https://www.codechef.com/COOK86/problems/LIKECS02

#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++)
	{
		cin >> n;
		cout << (n/2)+1;
		for(int j=(n/2)+2;j<=n+(n/2);j++)
			cout<<" "<<j;
		cout<<"\n";
	}
	return 0;

}
