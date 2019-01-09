// https://www.codechef.com/SEPT17/problems/MINPERM

#include<iostream>
using namespace std;

int main()
{
	int t,n,array[1111111];
	//scanf("%d",&t);
	cin >> t;
	for(int i=0;i<t;i++)
	{
		cin >> n;
		for(int j=1;j<=n;j++)
		{
			if(j%2 == 1)
				array[j]=j+1;
			else
				array[j]=j-1;
		}
		if(n%2==1)
		{
			array[n]=array[n-1];
			array[n-1]=n;
		}
		for(int j=1;j<=n;j++)
		{
			cout << array[j] << " ";
		}
		cout << "\n";
	}
	return 0;
}