// https://www.codechef.com/problems/SMRSTR

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t,n,q,x,d,check;
    long multiply;
    scanf("%d",&t);
    while(t--)
    {
        multiply = 1;
        check = 0;
        scanf("%d%d",&n,&q);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&d);
            multiply *= d;
            if(multiply >1000000000)
            {
                check = 1;
                i++;
                for(;i<n;i++)
                    scanf("%d",&d);
            }
        }
        if(check == 1)
        {
            for(int i=0;i<q;i++)
            {
                scanf("%d",&d);
                printf("0 ");
            }
            cout<<endl;
        }
        else
        {
            for(int i=0;i<q;i++)
            {
                scanf("%d",&d);
                printf("%d ",d/multiply);
            }
            cout<<endl;
        }
    }
    return 0;
}