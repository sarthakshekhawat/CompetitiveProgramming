// https://www.codechef.com/SEPT17/problems/SEACO

#include<iostream>
using namespace std;

int main()
{
	int T;
	long long int n,m;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		cin >> n >> m;
		long long int array[n]={0},array2[m][4];
		
		for(int j=0;j<m;j++)
		{
			array2[j][0] = 1;
			cin >> array2[j][1] >> array2[j][2] >> array2[j][3];
		}

		for(int j=m-1;j>=0;j--)
		{
			if(array2[j][1]==2)
			{
				for(int k=array2[j][2]-1;k<=array2[j][3]-1;k++)
				{
					array2[k][0] = (array2[k][0] + array2[j][0]);
				}
			}

			else
			{
				for(int k=array2[j][2]-1;k<=array2[j][3]-1;k++)
				{
					array[k]=(array[k]+array2[j][0])%1000000007;
				}
			}
		}

		cout << array[0];
		for(int j=1;j<n;j++)
		{
			cout <<" "<< array[j];
		}
		cout <<"\n";
	}
	return 0;
}