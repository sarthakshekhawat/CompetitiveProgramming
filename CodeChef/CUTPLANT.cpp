// https://www.codechef.com/APRIL18A/problems/CUTPLANT

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
#define mod 1000000007
#define pb push_back
#define sz size()
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;

int main()
{
	int t,i;
	si(t);
	while(t--)
	{
		int n;
		si(n);
		int iheight[n+1] ,fheight[n+1];
		iheight[0]=0;
		fheight[0]=0;
		f(i,1,n+1)
			si(iheight[i]);
		f(i,1,n+1)
			si(fheight[i]);
		int stack[3][n+1];
		stack[0][0]=1000000009;
		stack[1][0]=1000000009;
		stack[2][0]=0;


		int pointer =1;
		int count = 0;
		int flag=1;

		f(i,1,n+1)
		{
			if(fheight[i]>iheight[i])
			{
				flag = 0;
				printf("-1\n");
				break;
			}
		}

		if(flag==1)
		{
			f(i,1,n+1)
			{
				if(stack[1][pointer-1]>fheight[i])
				{
					stack[1][pointer]=fheight[i];
					stack[0][pointer++]=iheight[i];
					if(fheight[i]<iheight[i]){
						count++;
						stack[2][pointer-1]=0;
					}
					else
						stack[2][pointer-1]=1;
				}
				else if(stack[1][pointer-1]<fheight[i])
				{
					while(1)
					{
						if(stack[1][pointer-1]<fheight[i])
						{
							if(stack[0][pointer-2]>stack[0][pointer-1])
							{
								stack[0][pointer-2]=stack[0][pointer-1];
							}
							pointer--;
						}
						else
							break;
					}

					if(stack[1][pointer-1]>fheight[i])
					{
						stack[1][pointer]=fheight[i];
						stack[0][pointer++]=iheight[i];
						if(fheight[i]<iheight[i]){
							count++;
							stack[2][pointer-1]=0;
						}
						else
							stack[2][pointer-1]=1;
					}

					else //stack[1][pointer-1]==fheight[i]
					{
						if(stack[0][pointer-1]<stack[1][pointer-1])
						{
							//count++;
							if(stack[0][pointer-2]>stack[0][pointer-1])
								stack[0][pointer-2]=stack[0][pointer-1];
							if(fheight[i]==iheight[i])
							{
								stack[0][pointer-1]=iheight[i];
								//stack[1][pointer-1]=fheight[i];
								stack[2][pointer-1]=1;
							}
							else
							{
								stack[0][pointer-1]=iheight[i];
								stack[2][pointer-1]=0;
								count++;
							}
						}
						else if(stack[0][pointer-1]==stack[1][pointer-1])
						{
							if(stack[2][pointer-1]==1)
							{
								if(fheight[i]==iheight[i])
								{
									stack[0][pointer-1]=fheight[i];
									stack[1][pointer-1]=fheight[i];
								//	stack[2][pointer-1]=1;
								}
								else
								{
									stack[0][pointer-1]=iheight[i];
									stack[1][pointer-1]=fheight[i];
									stack[2][pointer-1]=0;
									count++;
								}
								//stack[2][pointer-1]=0;
								//count++;
							}
						}
					}
				}
				else //stack[1][pointer-1]==fheight[i]
				{
					if(stack[0][pointer-1]<stack[1][pointer-1])
					{
						//count++;
						if(stack[0][pointer-2]>stack[0][pointer-1])
							stack[0][pointer-2]=stack[0][pointer-1];
						if(fheight[i]==iheight[i])
						{
							stack[0][pointer-1]=iheight[i];
							//stack[1][pointer-1]=fheight[i];
							stack[2][pointer-1]=1;
						}
						else
						{
							stack[0][pointer-1]=iheight[i];
							stack[2][pointer-1]=0;
							count++;
						}
					}
					else if(stack[0][pointer-1]==stack[1][pointer-1])
					{
						if(stack[2][pointer-1]==1)
						{
							if(fheight[i]==iheight[i])
							{
								stack[0][pointer-1]=fheight[i];
								stack[1][pointer-1]=fheight[i];
							//	stack[2][pointer-1]=1;
							}
							else
							{
								stack[0][pointer-1]=iheight[i];
								stack[1][pointer-1]=fheight[i];
								stack[2][pointer-1]=0;
								count++;
							}
							//stack[2][pointer-1]=0;
							//count++;
						}
					}
				}
			}
			printf("%d\n",count);
		}
	}
	return 0;
}