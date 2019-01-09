// https://www.codechef.com/problems/LEPERMUT

#include<stdio.h>

int Inversion(int *array,int n)
{
	int count=0;
	for(int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
				count++;
		}
	}
	return count;
}

int LocalInversion(int *array,int n)
{
	int count=0;
	for (int i=0;i<n-1;i++)
	{
		if (array[i]>array[i+1])
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int t,n,a,b;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d",&n);
		int array[n];
		for(int j=0;j<n;j++)
		{
			scanf("%d",&array[j]);
		}

		if(n==1)
			printf("YES\n");
		else
		{
			a=Inversion(array,n);
			b=LocalInversion(array,n);
			if(a==b)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}