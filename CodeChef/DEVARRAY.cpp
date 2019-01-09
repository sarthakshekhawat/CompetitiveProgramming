// https://www.codechef.com/problems/DEVARRAY

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,q,t,min,max,a;
    scanf("%d%d%d",&n,&q,&a);
    min = max = a;
    n--;
    while(n--)
    {
        scanf("%d",&a);
        if(min>a)
            min = a;
        if(max<a)
            max = a;
    }
    while(q--)
    {
         scanf("%d",&t);
         if(min<=t && max>=t)
            printf("Yes\n");
        else
             printf("No\n");
    }
    return 0;
}