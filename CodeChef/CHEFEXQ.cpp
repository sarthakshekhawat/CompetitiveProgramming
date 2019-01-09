// https://www.codechef.com/problems/CHEFEXQ

#include <iostream>
#include <cstdio>
using namespace std;
 
int main()
{
	int n,q,t,x,y,answer,i;
	scanf("%d%d",&n,&q);
	int A[n+1],XOR[n+1];
	for(i=1;i<=n;i++)
		scanf("%d",&A[i]);
	XOR[0]=0;
	int calculate=0;
	while(q--)
	{
		scanf("%d%d%d",&t,&x,&y);
		if(t==1)
		{
			if(calculate>=x)
				calculate=x-1;
			A[x]=y;
		}
		else
		{
			answer=0;
			if(x>calculate)
			{
				for(i=1;i<=calculate;i++)
				{
					if(XOR[i]==y)
						answer++;
				}
				for(;i<=x;i++)
				{
					if((XOR[i]=XOR[i-1]^A[i])==y)
						answer++;
					calculate=x;
				}
			}
			else
			{
				for(i=1;i<=x;i++)
				{
					if(XOR[i]==y)
						answer++;
				}
			}
			printf("%d\n",answer);
		}
	}
	return 0;
} 