// https://www.codechef.com/problems/OMWG

#include<stdio.h>

int main()
{
	int T,r,c;
	scanf("%d",&T);
	
	while(T--)
	{	
		scanf("%d %d",&r,&c);
		printf("%d\n",r*(c-1)+c*(r-1));
	}
	return 0;
}