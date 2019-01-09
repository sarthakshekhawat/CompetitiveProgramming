// https://www.codechef.com/problems/FSQRT

#include<stdio.h>
#include<math.h>

int main()
{
	int T,a,b;
	scanf("%d",&T);
	
	while(T--)
	{
		scanf("%d",&a);
		b = sqrt(a);
		printf("%d\n",b);
	}
	return 0;
}