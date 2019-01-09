// https://www.codechef.com/LTIME53/problems/BUGCAL

#include <iostream>
#include <string.h>
using namespace std;


int main()
{
	int t;
	cin >> t;
	char a[20];
	char b[20];
	while(t--)
	{
		cin >> a;
		cin >> b;

		int la = strlen(a);
		int lb = strlen(b);

		if(la >= lb)
			
		{
			int k=la-1;
			for(int i=lb-1;i>=0;i--)
			{
				a[k] = (int(a[k]) + int(b[i]) - 96)%10 + 48;
				k--;
			}

			int a1=0;
			for(int i=0;i<la;i++)
			{
				if(int(a[i])-48 != 0)
				{	a1 = i;
					break;
				}

			}

			for(int i=a1;i<la;i++)
			{
				cout<<a[i];
			}
			cout << "\n";
			//cout << a<<endl;
		}

		else if(la < lb)
			
		{
			int k=lb-1;
			for(int i=la-1;i>=0;i--)
			{
				b[k] = (int(a[i]) + int(b[k]) - 96)%10 + 48;
				k--;
			}
			int b1=0;
			for(int i=0;i<lb;i++)
			{
				if(int(b[i])-48 != 0)
				{	b1 = i;
					break;
				}

			}

			for(int i=b1;i<lb;i++)
			{
				cout<<b[i];
			}
			cout << "\n";
			//cout << b <<endl;
		}

	}
	return 0;
}