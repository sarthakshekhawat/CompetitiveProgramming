// https://www.codechef.com/problems/TEAMFORM

#include<stdio.h>

int main()
{	
	int t,a,b,x,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&a,&b);
		if(a>=2*b && a%2==0)
		{
			while(b--)
			{
				scanf("%d %d",&x,&y);
			}
			printf("yes\n");
		}
		
		else
		{
			while(b--)
			{
				scanf("%d %d",&x,&y);
			}
			printf("no\n");
		}
	}
	return 0;
}