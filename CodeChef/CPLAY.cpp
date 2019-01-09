// https://www.codechef.com/DEC17/problems/CPLAY
 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int Awon,Bwon,check,i;
    while (!s.empty())
	{
		Awon=0;
		Bwon=0;
		check=0;
		for(i=0;i<5;i++)
		{
			if(s[2*i]=='1')
				Awon++;
			if(Awon>Bwon+5-i){
				cout<<"TEAM-A "<<2*i+1<<endl;
				check=1;
				break;
			}
			else if(Bwon>Awon+4-i){
				cout<<"TEAM-B "<<2*i+1<<endl;
				check=1;
				break;
			}
			if(s[2*i+1]=='1')
				Bwon++;
			if(Awon>Bwon+4-i){
				cout<<"TEAM-A "<<2*i+2<<endl;
				check=1;
				break;
			}
			else if(Bwon>Awon+4-i){
				cout<<"TEAM-B "<<2*i+2<<endl;
				check=1;
				break;
			}
		}
		if(check==0)
		{
			for(;i<10;i++)
			{
				if(s[2*i]!=s[2*i+1])
				{
					if(s[2*i]=='1')
						cout<<"TEAM-A "<<2*i+2<<endl;
					else
						cout<<"TEAM-B "<<2*i+2<<endl;
					check=1;
					break;
				}
			}
		}
		if(check==0)
			cout<<"TIE"<<endl;
	    getline(cin, s);
	}
	return 0;
}