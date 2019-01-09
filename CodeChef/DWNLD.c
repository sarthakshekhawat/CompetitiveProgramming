// https://www.codechef.com/problems/DWNLD

#include<stdio.h>

int main()
{
	int T,n,k,t,d,sum;
	scanf("%d",&T);
	
	while(T--)
	{	
		sum = 0;
		scanf("%d %d",&n,&k);
		while(n--)
		{
			scanf("%d %d",&t,&d);
			if(t-k>=0)
			{
				sum = sum + (t-k)*d;
				k=0;
			}
			else
				k=k-t;
		}
		printf("%d\n",sum);
	}
	return 0;
}