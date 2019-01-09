// https://www.codechef.com/DEC17/problems/CHEFHAM

#include <iostream>
using namespace std;

int main()
{
	int t,n,number,f1,f2;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int freq[100001][3]={0}; //initialize the first column with zero
		int freq_of_2[n/2];
		int freq_of_1[n];
		int B[n];
		int hamming=0;
		if(n>3)
		{	
			hamming = n;
			f1=0;
			f2=0;
			for(int i=0;i<n;i++)
			{
				cin>>number;
				if(++freq[number][0]==1)
					freq[number][1]=i;
				else
					freq[number][2]=i;
			}

			for(int i=0;i<=100000;i++)
			{
				if(freq[i][0]==1){
					freq_of_1[f1++]=i;
				}
				else if(freq[i][0]==2){
					freq_of_2[f2++]=i;
				}
			}

			for(int i=1;i<f1;i++)
				B[freq[freq_of_1[i-1]][1]]=freq_of_1[i];
			B[freq[freq_of_1[f1-1]][1]]=freq_of_1[0];

			for(int i=1;i<f2;i++)
			{
				B[freq[freq_of_2[i-1]][1]]=freq_of_2[i];
				B[freq[freq_of_2[i-1]][2]]=freq_of_2[i];
			}
			if(f2>0)
			{
				B[freq[freq_of_2[f2-1]][1]]=freq_of_2[0];
				B[freq[freq_of_2[f2-1]][2]]=freq_of_2[0];
			}

			int temp;
			if(f2==1)
			{
				temp = B[freq[freq_of_2[0]][1]];
				B[freq[freq_of_2[0]][1]]=B[freq[freq_of_1[0]][1]];
				B[freq[freq_of_1[0]][1]]=temp;

				temp = B[freq[freq_of_2[0]][2]];
				B[freq[freq_of_2[0]][2]]=B[freq[freq_of_1[1]][1]];
				B[freq[freq_of_1[1]][1]]=temp;
			}
			if(f1==1)
			{
				temp = B[freq[freq_of_2[0]][1]];
				B[freq[freq_of_2[0]][1]]=B[freq[freq_of_1[0]][1]];
				B[freq[freq_of_1[0]][1]]=temp;
		 	}
		}
		else
		{
			int A[n];
			for(int i=0;i<n;i++)
				cin>>A[i];
			for(int i=0;i<n-1;i++)
				B[i]=A[i+1];
			B[n-1]=A[0];

			for(int i=0;i<n;i++)
			{
				if(A[i]!=B[i])
					hamming++;
			}
		}
		cout<<hamming<<endl;
		for(int i=0;i<n;i++)
			cout<<B[i]<<" ";
		cout<<"\n";

	}
	return 0;
}