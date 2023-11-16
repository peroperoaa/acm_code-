#include <bits/stdc++.h>
const int N=2e4+10;
int a[N];
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int sum=0;
    int n,high;std::cin>>n>>high;
    for(int i=0;i<n;i++)
       std::cin>>a[i];
    std::sort(a,a+n,cmp);
    int cnt;
    for(cnt=0;sum<high;cnt++)
        sum+=a[cnt];
    std::cout<<cnt;
    return 0;
}