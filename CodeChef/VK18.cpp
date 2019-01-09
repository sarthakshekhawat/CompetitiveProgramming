// https://www.codechef.com/DEC17/problems/VK18

#include <iostream>
#include <string>
#include <cstdlib> 
using namespace std;

int main()
{
	int t,n,l,even,odd;
	string s;
	cin>>t;
	long dia_value[2000001];
	for(int i=2;i<=2000000;i++)
	{
		s = to_string(i);
		l = s.size();
		even=0;
		odd=0;
		for(int k=0;k<l;k++)
		{
			int a = int(s[k])-48;
			if(a%2==0)
				even+=a;
			else
				odd+=a;
		}
		dia_value[i]=abs(even-odd);
	}
	long stored[1000001];
	stored[0]=0;
	dia_value[1]=0;
	int k=0;
	for(int i=1;i<=1000000;i++)
	{
		k=k-dia_value[i]+dia_value[2*i-1];
		stored[i]=stored[i-1]+2*k+dia_value[2*i];
		k+=dia_value[2*i];
	}
	while(t--)
	{
		cin>>n;
		cout<<stored[n]<<endl;
	}
	return 0;
}