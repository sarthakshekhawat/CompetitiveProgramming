// https://www.codechef.com/NOV17/problems/CLRL

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	long n;
	long r;
	long rating;
	while(t--)
	{
		long min = 0;
		long max = 1000000001;
		int decide=1;
		cin >> n >> r;
		while(n--)
		{
			cin >> rating;
			if(rating >= r && rating <= max)
				max = rating;
			else if(rating <= r && rating >= min)
				min = rating;
			else
				decide = 0;
		}
		if(decide==1)
			cout << "YES"<<endl;
		else
			cout << "NO"<<endl;
	}
	return 0;
}