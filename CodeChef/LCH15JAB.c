// https://www.codechef.com/problems/LCH15JAB

#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,a,b,l;
	char s[50];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		l = strlen(s);
		if(l%2!=0)
			printf("NO\n");
		else
		{
			b=0;
			for(i=0;i<l;i++)
			{
				a=0;
				for(j=i;j<l;j++)
				{
					if(s[j]==s[i])
						a++;
				}
				if(a>b)
					b=a;
			}
			if(l/2==b)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}