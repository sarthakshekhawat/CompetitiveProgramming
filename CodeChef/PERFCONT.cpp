// https://www.codechef.com/OCT17/problems/PERFCONT

#include <iostream>
using namespace std;

int main()
{
	int t,n;
	long no_p,p,hard,cakewalk;
	long h,c;
	cin >> t;
	for(int z=0;z<t;z++)
	{
		cin >> n >> p;
		hard = p/10;
		cakewalk = p/2;
		h=0;
		c=0;
		for(int i=0;i<n;i++)
		{
			cin >> no_p;
			if(no_p<=hard)
				h++;
			else if(no_p>=cakewalk)
				c++;
		}

		if(h==2 && c==1)
			cout << "yes\n";
		else
			cout << "no\n";

	}
	return 0;
}