#include <bits/stdc++.h>
typedef long long ll;
ll fibo(ll n)
{
    if(n==1||n==2)return 1;
    else return fibo(n-1)+fibo(n-2);
}
void solve(void)
{
    ll n;std::cin>>n;
    std::cout<<fibo(n)<<'\n';
}
int main()
{
    ll _;std::cin>>_;
    while(_--)solve();
    return 0;
}