// https://www.codechef.com/problems/RGAME

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t,n;
    long twos[100001];
    twos[1] = 2;
    for(int i=2;i<=100000;i++)
        twos[i] = (twos[i-1]*2)%1000000007;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int data[n+1];
        for(int i=0;i<=n;i++)
            scanf("%d",&data[i]);
        long pair = (2*data[n])%1000000007;
        for(int i=n-1;i>=1;i--)
            pair = (pair + twos[n+1-i]*data[i])%1000000007;
        long answer = (data[0]*pair)%1000000007;
        pair = (1000000007 + pair - (data[1]*twos[n])%1000000007)%1000000007;
        
        for(int i=1;i<n;i++)
        {
            answer = (answer + data[i]*pair)%1000000007;
            pair = (2*(1000000007 + pair - (data[i+1]*twos[n-1])%1000000007))%1000000007;
        }
        
        printf("%d\n",answer);
    }
    return 0;
}