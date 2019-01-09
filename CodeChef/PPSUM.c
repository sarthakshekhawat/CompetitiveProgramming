// https://www.codechef.com/problems/PPSUM

#include<stdio.h>

int main()
{
    int d,n,t,x;
    int sum[16];
    scanf("%d",&t);
    x=t;
    if((t>=1) && (t<=16))
    {
        while(t)
        {
            t--;
            scanf("%d %d",&d,&n);
            if((d>=1)&&(n>=1)&&(n<=4))
            {
                while(d)
                {
                    d--;
                    sum[t]=(n*(n+1))/2;
                    n=sum[t];
                }
            }
        }

        while(x)
        {
            x--;
            printf("%d\n",sum[x]);
        }
    }
}
