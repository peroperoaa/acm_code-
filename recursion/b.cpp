#include <bits/stdc++.h>
typedef long long ll;
ll pell(ll n)
{
    if(n==1)return 1;
    else if(n==2)return 2;
    else
    {
        ll a=1,b=2,c;
        for(int i=3;i<=n;i++)c=(2*b+a)%32767,a=b,b=c;
        return b;
    }
}
void solve(void)
{
    ll n;std::cin>>n;
    std::cout<<pell(n)<<'\n';
}
int main()
{
    int _;std::cin>>_;
    while(_--)solve();
    return 0;
}