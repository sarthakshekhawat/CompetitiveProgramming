// https://www.codechef.com/problems/CK87GSUB

#include <iostream>
#include <string.h>
using namespace std;

char str[100005];

int main()
{
	int t;
	long count;
	long count2;
	cin >> t;
	int l;
	char temp;
	while(t--)
	{
		cin >> str;
		count = 0;
		l = strlen(str);
	
		int i=0;
		while(i<l-1)
		{
			temp = str[i+1];
			count2 = 0;
			for(int j=i+1;j<l;j++)
			{
				if(temp == str[i])
				{
					if(temp==str[j])
						count2++;
					else
					{
						count = count + ((count2+1)*(count2))/2;
						i=j-1;
						break;
					}
					if(j==l-1 && temp==str[j])
					{
						count = count + ((count2+1)*(count2))/2;
						i=l;
						break;
					}
				}

				else if(temp != str[i])
				{
					if(temp==str[j])
						count2++;
					else if(str[i]==str[j])
					{
						count = count +1+ ((count2-1)*(count2))/2;
						i=j-1;
						break;
					}
					else if(str[i]!=str[j])
					{
						count = count + ((count2-1)*(count2))/2;
						i=j-1;
						break;
					}
					if(j==l-1 && temp==str[j])
					{
						count = count + ((count2-1)*(count2))/2;
						i=l;
						break;
					}
				}
			}
		}

		cout << count << endl;
	}
	return 0;
}