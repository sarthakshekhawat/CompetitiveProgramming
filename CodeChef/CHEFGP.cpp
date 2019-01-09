// https://www.codechef.com/OCT17/problems/CHEFGP

#include <iostream>
using namespace std;

void decide(double no_group1 ,double no_group2,int fruit1,int fruit2,int group_m_1,int group_m_2,char c1,char c2)
{
	while(fruit1!=0 || fruit2!=0)
	{
		for(int i=0;i<group_m_1;i++)
		{
			if(fruit1!=0)
			{
				cout<<c1;
				fruit1--;
			}
			else
				break;
		}
			for(int i=0;i<group_m_2;i++)
		{
			if(fruit2!=0)
			{
				cout<<c2;
				fruit2--;
			}
			else
				break;
		}

	}
		
}

void decide2(double no_group1 ,double no_group2,int fruit1,int fruit2,int group_m_1,int group_m_2,char c1,char c2,int f1,int f2)
{
			if(int(no_group1)!=no_group1)
			{
				//a = int(no_group_a)+1;
				f2 = int(no_group1)+1;
			}
			else if(int(no_group1)==no_group1)
			{
				//a = int(no_group_a);
				f2 = int(no_group1);
			}
			//int zqq = group_m_2 ;
			group_m_2 = fruit2/f2;

			if(group_m_2 >= 1)
			{
				while(fruit1!=0 || fruit2!=0)
				{
					for(int i=0;i<group_m_1;i++)
					{
						if(fruit1!=0)
						{
							cout<<c1;
							fruit1--;
						}
						else
							break;
					}

				//	if(f2==0)
				//		break;

					group_m_2 = fruit2/f2;
				/*	if(group_m_2 == zqq + 1)
					{
						group_m_2--;
						f2++;
					}
				*/
					for(int i=0;i<group_m_2;i++)
					{
						if(fruit2!=0)
						{
							cout<<c2;
							fruit2--;
						}
						else
							break;
					}
					f2--;
	

				}
				cout<<"\n";
			}

			else if(group_m_2 < 1)
			{
				while(fruit1!=0 || fruit2!=0)
				{
					for(int i=0;i<group_m_1;i++)
					{
						if(fruit1!=0)
						{
							cout<<c1;
							fruit1--;
						}
						else
							break;
					}

					if(fruit1!=0 && fruit2==0)
						cout<<"*";

					if(fruit2!=0)
					{
						cout<<c2;
						fruit2--;
					}


				}
				cout<<"\n";
			}
}

int main()
{
	int t,apple,banana,a_group_m,b_group_m;
	char temp,data;
	int a,b;
	cin >> t;
	
	for(int z=0;z<t;z++)
	{
		apple=0;
		banana=0;
		temp = cin.get();
		while((data=cin.get())!='\n')
		{
			if(data=='a')
				apple++;
			else if(data=='b')
				banana++;
		}

		cin >>a_group_m >> b_group_m ;

		double no_group_a = (apple*1.0)/a_group_m;
		double no_group_b = (banana*1.0)/b_group_m;

		if(int(no_group_a)==int(no_group_b))
		{
			if(int(no_group_b)==no_group_b && int(no_group_a)!=no_group_a)
			{
				decide(no_group_a ,no_group_b,apple , banana,a_group_m , b_group_m,'a','b');
			}

			else if(int(no_group_b)!=no_group_b && int(no_group_a)==no_group_a)
			{
				decide(no_group_b ,no_group_a, banana, apple, b_group_m , a_group_m,'b','a');
			}
			else
				decide(no_group_a ,no_group_b,apple , banana,a_group_m , b_group_m,'a','b');

			cout<<"\n";
		}



		else if(int(no_group_a)>int(no_group_b))
		{
			decide2(no_group_a ,no_group_b,apple,banana,a_group_m,b_group_m,'a','b',a,b);
		}


		else if(int(no_group_b)>int(no_group_a))
		{
			decide2(no_group_b ,no_group_a,banana,apple,b_group_m,a_group_m,'b','a',b,a);
		}

	}
	return 0;
}