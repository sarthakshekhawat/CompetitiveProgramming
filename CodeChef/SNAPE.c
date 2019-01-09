// https://www.codechef.com/problems/SNAPE

#include<stdio.h>
int main()
{
    int t,x;
    float b,l;
    float min[1000],max[1000];
    scanf("%d",&t);
    x=t;
    if((t>=1) && (t<=1000))
    {
        while(t)
        {
            t--;
            scanf("%f %f",&b,&l);
            if((b>=1)&&(b<=1000)&&(l>=1)&&(l<=1000))
            {
                min[t]=sqrt((l*l)-(b*b));
                max[t]=sqrt((l*l)+(b*b));
            }
        }
        if((b>=1)&&(b<=1000)&&(l>=1)&&(l<=1000))
            {
                while(x)
                {
                    x--;
                    printf("%f %f\n",min[x],max[x]);
                }
            }
    }
}
