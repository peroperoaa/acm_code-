#include <bits/stdc++.h>
using namespace std;
int a[5050];
long long ans (int n)
{
    if(n==1)return 1;
    else if(n==2)return 2;
    else if(a[n])return a[n];
    else
    {
        long long sum=0;
        sum+=ans(n-1)+ans(n-2);
        a[n]=sum;
        return sum;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%lld\n",ans(n));
    return 0;
}