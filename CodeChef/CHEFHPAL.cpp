//https://www.codechef.com/NOV17/problems/CHEFHPAL

#include <iostream>
using namespace std;

int main()
{
	int t,n,A,k;
	cin >> t;
	while(t--)
	{
		cin>>n>>A;
		if(A==1)
		{
			cout<<n<<" ";
			for(int i=0;i<n;i++)
				cout<<'a';
		}
		else if(A==2)
		{
			if(n==1)
				cout<<"1 a";
			else if(n==2)
				cout<<"1 ab";
			else if(n==3)
				cout<<"2 aab";
			else if(n==4)
				cout<<"2 aabb";
			else if(n==5)
				cout<<"3 aaaba";
			else if(n==6)
				cout<<"3 aaabab";
			else if(n==7)
				cout<<"3 aaababb";
			else if(n==8)
				cout<<"3 aaababbb";
			else
			{
				cout<<"4 ";
				char s[7]="aabbab";
				k=n/6;
				for(int i=0;i<k;i++)
					cout<<s;
				k=n%6;
				for(int i=0;i<k;i++)
					cout<<s[i];
			}
		}
		else
		{
			cout<<"1 ";
			k=n/3;
			char s[4]="abc";
			for(int i=0;i<k;i++)
				cout<<s;
			k=n%3;
			for(int i=0;i<k;i++)
				cout<<char(97+i);
		}
		cout<<endl;
	}
	return 0;
}