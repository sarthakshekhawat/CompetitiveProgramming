// https://www.codechef.com/problems/KOL16B

#include <cstdio>

int main()
{
    int t,n,input,x;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {   
        scanf("%d",&n);
        int A[n], B[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&input);
            B[i] = x = input>>16;
            A[i] = (x<<16)^input;
        }
        printf("Case %d:\n",k);
        for(int i=0;i<n;i++)
            printf("%d ",A[i]);
        printf("\n");
        for(int i=0;i<n;i++)
            printf("%d ",B[i]);
        printf("\n");
    }
    return 0;
}