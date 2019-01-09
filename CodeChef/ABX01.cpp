// https://www.codechef.com/problems/ABX01

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[10][10]= { 	{0,0,0,0,0,0,0,0,0,0},
						{0,1,2,3,4,5,6,7,8,9},
						{0,2,4,6,8,1,3,5,7,9},
						{0,3,6,9,3,6,9,3,6,9},
						{0,4,8,3,7,2,6,1,5,9},
						{0,5,1,6,2,7,3,8,4,9},
						{0,6,3,9,6,3,9,6,3,9},
						{0,7,5,3,1,8,6,4,2,9},
						{0,8,7,6,5,4,3,2,1,9},
						{0,9,9,9,9,9,9,9,9,9}};

	//int arr[10];
	long A,N,t;
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld%ld",&A,&N);
		long k = A%9;
		if(k==0)
			k=9;
		//long temp = k;
		int count;
		long val = k;

		if(k==1)
			count=1;
		else if(k==2)
			count=6;
		else if(k==3){
			if(N>1)
				k=9;
			count=1;
		}
		else if(k==4)
			count=3;
		else if(k==5)
			count=6;
		else if(k==6){
			if(N>1)
				k=9;
			count=1;
		}
		else if(k==7)
			count=3;
		else if(k==8)
			count=2;
		else
			count=1;

		int z = (N-1)%count;
		for(int i=1;i<=z;i++)
			k = a[k][val];
		printf("%ld\n",k);
	//	if(count==0)
	//		printf("%ld\n",k);
	//	else
	//		printf("%d\n",arr[(N-1)%count]);
	}
 
	return 0;
}