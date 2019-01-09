// https://www.codechef.com/NOV17/problems/CSUBQ

#include <iostream>
using namespace std;

int main()
{
	long N,Q,L,R,x,y,count,answer,countTotal,negative,i;
	int query;
	cin >>N>>Q>>L>>R;
	long array[N]={0};
	while(Q--)
	{
		cin>>query>>x>>y;
		if(query==1)
			array[x-1]=y;
		else
		{
			countTotal=0;
			count=0;
			negative=0;
			answer=0;
			for(i=x-1;i<y;i++)
			{
				if(array[i]<=R)
				{
					countTotal++;
					if(array[i]>=L)
					{
						negative += (count*(count+1))/2;
						count=-1;
					}
					count++;
					/*if(i==y-1)
						answer += (countTotal*(countTotal+1))/2 - negative - (count*(count+1))/2;*/
				}
				else
				{
					answer += (countTotal*(countTotal+1))/2 - negative - (count*(count+1))/2;
					countTotal=0;
					negative=0;
					count=0;
				}
			}
			if(i==y && array[y-1]<=R)
				answer += (countTotal*(countTotal+1))/2 - negative - (count*(count+1))/2;
			cout<<answer<<endl;
		}
	}
	return 0;
}