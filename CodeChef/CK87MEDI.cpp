// https://www.codechef.com/COOK87/problems/CK87MEDI

#include <iostream>
using namespace std;

int array[1500];

void quickSort(int low, int high)
{
	if(low < high)
    {
		int pivot ,i = low-1, j;
		pivot = high;
		for(j=low; j<high; j++)
		{
			if(array[j] <= array[pivot])
                {
                    i++;
                    swap(array[i],array[j]);
                }
		}

        swap(array[i+1], array[high]);
		quickSort(low, i);
		quickSort(i+2, high);
	}
}

int main()
{
	int t;
	cin >> t;
	int n;
	int k;
	
	for(int z=0;z<t;z++)
	{
		cin >> n >>k;
		
		for(int i=0;i<n;i++)
			cin >> array[i];

		quickSort(0, n-1);

		int q = (n+k-1)/2;


		if(k>=n-1)
		{
			cout << array[n-1] <<"\n";
		}

		else
		{
			cout << array[q] <<"\n";
		}
	
	}
	return 0;
}