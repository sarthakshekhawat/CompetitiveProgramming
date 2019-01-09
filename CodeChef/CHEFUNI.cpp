// https://www.codechef.com/DEC17/problems/CHEFUNI

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	long energy;
	int x,y,z,a,b,c,A,B,C,better1,better2,better3,min1,min2,min3,deduce;
	while(t--)
	{
		cin>>x>>y>>z>>a>>b>>c;
		A=6*a;
		B=3*b;
		C=2*c;
		if(A<=B)
		{
			if(B<=C)
			{
				better1=A;
				better2=B;
				better3=C;
			}
			else
			{
				if(A<=C)
				{
					better1=A;
					better2=C;
					better3=B;
				}
				else
				{
					better1=C;
					better2=A;
					better3=B;
				}
			}
		}
		else
		{
			if(A<=C)
			{
				better1=B;
				better2=A;
				better3=C;
			}
			else
			{
				if(B<=C)
				{
					better1=B;
					better2=C;
					better3=A;
				}
				else
				{
					better1=C;
					better2=B;
					better3=A;
				}
			}
		}

		if(x<=y)
		{
			if(y<=z)
			{
				min1=x;
				min2=y;
				min3=z;
			}
			else
			{
				if(x<=z)
				{
					min1=x;
					min2=z;
					min3=y;
				}
				else
				{
					min1=z;
					min2=x;
					min3=y;
				}
			}
		}
		else
		{
			if(x<=z)
			{
				min1=y;
				min2=x;
				min3=z;
			}
			else
			{
				if(y<=z)
				{
					min1=y;
					min2=z;
					min3=x;
				}
				else
				{
					min1=z;
					min2=y;
					min3=x;
				}
			}
		}

		if(better1==A)
			energy = a*(min1+min2+min3);
		else if(better1==B)
		{
			if(min1+min2>=min3)
			{
				if((min1+min2+min3)%2==0)
					energy = b*((min1+min2+min3)/2);
				else if(a+b>=c)
					energy = c + b*((min1+min2+min3-3)/2);
				else   //(a+b<c)
					energy = a + b*((min1+min2+min3-1)/2);
			}
			else
				energy = b*(min1+min2) + a*(min3-min1-min2);
		}
		else //(better1==c)
		{
			if(better2==A)
				energy = c*min1 + a*(min2+min3-(2*min1));
			else //(better2==B)
			{
				if(2*b>=c+a)
					energy = c*min1 + b*(min2-min1) + a*(min3-min2);
				else
				{
					if(min1+min2>=min3)
					{
						deduce = min1+min2-min3;
						energy = c*deduce + b*((min1+min2+min3-(3*deduce))/2);
					}
					else
						energy = b*(min1+min2) + a*(min3-min1-min2);
				}
			}
		}
		cout<<energy<<endl;
	}
	return 0;
}