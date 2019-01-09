// https://www.codechef.com/problems/CHEFSTUD

#include<stdio.h>
#include<string.h>
int main()
{
	int t,x,p,j,i;
	char s[100000];
	scanf("%d",&t);
	while(t--)
	{
		p=0;
		j=0;
		scanf("%s",s);
		x = strlen(s);
		//printf("%d\n",x);
		for(i=0;i<x;i++)
		{
			if(s[i] == '<')
				s[i] = '>';
			else if(s[i] == '>')
				s[i] = '<';
		}
		//printf("%s\n",s);
		while(1)
		{
			if(s[j]=='>' && s[j+1]=='<')
			{
				p++;
				j=j++;
			}
			j++;
			
			if(j==x)
			{
				printf("%d\n",p);
				break;
			}
		}
		
	}
	return 0;
}