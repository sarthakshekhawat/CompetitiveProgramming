// https://www.codechef.com/JULY18B/problems/PINS

#include<bits/stdc++.h>
using namespace std;

double comp(int n){
	if(n==0)return 1;
	double ans=comp(n/2);
	ans=ans*ans;
	if(n%2)ans=ans*10;
	return ans;
}
int main()
{
	int t;
	long long int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		n=n/2;
		cout<<"1 1";

		for(int i=1;i<=n;i++)cout<<"0";
			cout<<endl;
	}
	return 0;
}