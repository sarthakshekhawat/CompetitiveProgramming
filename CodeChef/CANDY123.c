// https://www.codechef.com/problems/CANDY123

#include<stdio.h>

int main()
{
	int t,a,b,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&a,&b);
		i = 1;
		while(1)
		{
			if(a<i*i)
			{	
				printf("Bob\n");
				break;
			}
				
			if(b<(i*i)+i)
			{
				printf("Limak\n");
				break;
			}
			i++;
		}
	}
	return 0;
}