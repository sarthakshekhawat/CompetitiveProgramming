// https://www.codechef.com/problems/KFIB

#include <iostream>
using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;
	if(n>k)
	{
		long array[n];
		for(int i=0;i<k;i++)
			array[i]=1;
		array[k]=k;
		for(int i=k+1;i<n;i++)
		{
			array[i]=(2*array[i-1] - array[i-k-1])%1000000007;
		}
		cout<<array[n-1]<<endl;
	}
	else
		cout<<"1"<<endl;
	return 0;
}