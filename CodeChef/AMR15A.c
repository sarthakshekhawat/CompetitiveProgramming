// https://www.codechef.com/problems/AMR15A

#include<stdio.h>

int main()
{	
	int n,e=0,o=0,w;
	scanf("%d",&n);
	while(n--)
	{	
		scanf("%d",&w);
		if(w%2==0)
			e++;
		else
			o++;
	}
	if(e>o)
		printf("READY FOR BATTLE\n");
	else
		printf("NOT READY\n");
	return 0;
}