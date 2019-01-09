// https://www.codechef.com/OCT17/problems/MEX

#include <iostream>
using namespace std;

int main()
{
	int t,n,k,no,mex;
	cin >> t;
	for(int z=0;z<t;z++)
	{
		cin >> n >> k;
		int s[200001]={0};
		mex=0;
		for(int i=0;i<n;i++)
		{
			cin >> no;
			s[no]=1;
		}

		int x=k;

		for(int i=0;i<200001+x;i++)
		{
			if(s[i]==1)
				mex++;
			else if(k>0)
			{
				mex++;
				k--;
			}
			else
				break;

		}

		cout << mex << endl;
	}
	return 0;
}