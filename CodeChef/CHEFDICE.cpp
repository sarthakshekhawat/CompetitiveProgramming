// https://www.codechef.com/LTIME52/problems/CHEFDICE

#include <iostream>

using namespace std;

int main()
{
	int t,n,no2,no1,denote,denote2,check;
	cin >> t;
	for(long z=0;z<t;z++)
	{
		cin >> n;
		int arr[7][7]={0};
	//	int count[7]={0};
		cin >> no1;
		for(int x=0;x<n-1;x++)
		{
			cin >> no2;

		/*	if(arr[no1][no2]==0)
			{
				count[no1]++;
				count[no2]++;
			}
		*/
			arr[no1][no2]=1;
			arr[no2][no1]=1;
			no1=no2;
		}

		denote = 0;
		for(int i=1;i<7;i++)
		{
			if(arr[i][i]==1)
			{
				cout <<"-1\n";
				break;
			}
			denote++;
		}

		denote2=0;
		for(int i=1;i<7;i++)
		{
			check = 0;
			for(int j=1;j<7;j++)
			{
				if(arr[i][j]==1)
					check++;
			}
			if(check > 4)
			{
				cout <<"-1\n";
				break;
			}
			denote2++;
		}

		if(denote==6 && denote2==6)
		{
			for(int i=1;i<7;i++)
				arr[i][i]=1;

			
			int o[7]={0};

			for(int k=0;k<3;k++)
			{
				int opp[7]={0};
				for(int i=1;i<7;i++)
				{
					for(int j=1;j<7;j++)
					{
						if(arr[i][j]==0)
							opp[i]++;
					}
				}

				int min=10;
				int min_i;

				for(int a=1;a<7;a++)
				{
					if(opp[a]<min && opp[a]>0)
					{
						min = opp[a];
						min_i = a;
					}
				}

				for(int i=1;i<7;i++)
				{
					if(arr[min_i][i]==0)
					{
						o[min_i]=i;
						o[i]=min_i;

						for(int j=1;j<7;j++)
						{
							arr[min_i][j]=1;
							arr[i][j]=1;
							arr[j][min_i]=1;
							arr[j][i]=1;
						}

						break;
					}
				}



			}


			cout<<o[1];
			for(int i=2;i<7;i++)
			{
				cout<<" "<<o[i];
			}

			cout<<"\n";

		}

	}

	return 0;
}