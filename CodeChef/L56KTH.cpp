// https://www.codechef.com/LTIME56/problems/L56KTH

#include<bits/stdc++.h>
using namespace std;
#define sll(a) scanf("%lld",&a)
#define sl(a) scanf("%ld",&a)
#define si(a) scanf("%d",&a)
#define sc(a) scanf("%c",&a)
#define pll(a) printf("%lld",a)
#define pl(a) printf("%ld",a) 
#define pi(a) printf("%d",a)
#define nl printf("\n")
#define sp printf(" ")
#define ps(a) printf("%s",a)
#define pc(a) printf("%c",a)
#define f(x,y,z) for(x=y;x<z;++x)
#define rev(x,y,z) for(x=z-1;x>=y;--x)
#define mod %1000000007
#define pb push_back
#define sz size()
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;


void quickSort(int *list, int low, int high)
{
	if(low < high)
    {
		ll pivot ,i = low-1, j;
		pivot = high;
		for(j=low; j<high; j++)
		{
			if(list[j] <= list[pivot])
                {
                    i++;
                    swap(list[i],list[j]);
                }
		}

        swap(list[i+1], list[high]);
		quickSort(list, low, i);
		quickSort(list, i+2, high);
	}
}


int main()
{
//	int t;
//	si(t);
	int n;
	ll k;
//	while(t--)
//	{
		si(n);
		sll(k);
		int arr[n];
		int i,j;
		int range = (n*(n+1))/2;
		f(i,0,n)
		{
			si(arr[i]);
		}
		//vi arr2;
		//vi arr3;
		int start=0;
		int arr4[range];
		f(i,0,n)
		{
			int min = 999999;
			int xxx=0;
			f(j,i,n)
			{
				if(arr[j]<min)
				{
					min=arr[j];
				}
				xxx = xxx^arr[j];
				arr4[start++] = xxx*min;
				//arr2.pb(min);
			}
		}
	/*	f(i,0,n)
		{
			int xxx = 0;
			f(j,i,n)
			{
				xxx = xxx^arr[j];
				arr3.pb(xxx);
			}
		}

		int arr4[range];
		f(i,0,range)
		{
			arr4[i]=arr3[i]*arr2[i];
		}
		*/

		quickSort(arr4,0,range-1);
/*			ll K=0;
			ll temp;
			ll min;
			for(int i=0;i<range;i++)
			{
				min=K;
				for(int j=K;j<range;j++)
				{
					if(arr4[min]>arr4[j])
					{
						min=j;
					}
				}
				if(min!=i)
				{
					temp =arr4[min];
					arr4[min]=arr4[i];
					arr4[i]=temp;
				}
				K++;
			}
*/
		printf("%d\n",arr4[k-1]);
//	}
	return 0;
}