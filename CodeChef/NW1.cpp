// https://www.codechef.com/LTIME55/problems/NW1

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,w;
	string s;
	cin >> t;
	while(t--)
	{
		cin >> w >> s;
		int mo=4,tu=4,we=4,th=4,fr=4,sa=4,su=4;
		if(w==28)
			cout<<"4 4 4 4 4 4 4"<<endl;
		else if(w==29)
		{
			if(s=="mon")
				cout<<"5 4 4 4 4 4 4"<<endl;
			else if(s=="tues")
				cout<<"4 5 4 4 4 4 4"<<endl;
			else if(s=="wed")
				cout<<"4 4 5 4 4 4 4"<<endl;
			else if(s=="thurs")
				cout<<"4 4 4 5 4 4 4"<<endl;
			else if(s=="fri")
				cout<<"4 4 4 4 5 4 4"<<endl;
			else if(s=="sat")
				cout<<"4 4 4 4 4 5 4"<<endl;
			else
				cout<<"4 4 4 4 4 4 5"<<endl;
		}
		else if(w==30)
		{
			if(s=="mon")
				cout<<"5 5 4 4 4 4 4"<<endl;
			else if(s=="tues")
				cout<<"4 5 5 4 4 4 4"<<endl;
			else if(s=="wed")
				cout<<"4 4 5 5 4 4 4"<<endl;
			else if(s=="thurs")
				cout<<"4 4 4 5 5 4 4"<<endl;
			else if(s=="fri")
				cout<<"4 4 4 4 5 5 4"<<endl;
			else if(s=="sat")
				cout<<"4 4 4 4 4 5 5"<<endl;
			else
				cout<<"5 4 4 4 4 4 5"<<endl;
		}
		else
		{
			if(s=="mon")
				cout<<"5 5 5 4 4 4 4"<<endl;
			else if(s=="tues")
				cout<<"4 5 5 5 4 4 4"<<endl;
			else if(s=="wed")
				cout<<"4 4 5 5 5 4 4"<<endl;
			else if(s=="thurs")
				cout<<"4 4 4 5 5 5 4"<<endl;
			else if(s=="fri")
				cout<<"4 4 4 4 5 5 5"<<endl;
			else if(s=="sat")
				cout<<"5 4 4 4 4 5 5"<<endl;
			else
				cout<<"5 5 4 4 4 4 5"<<endl;
		}
	}
	return 0;
}