#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans(int n,int t)
{
    ll sum=0;
    for(int i=t;i*i<=n;i++)
        if(n%i==0)
        {
            if(i!=n/i)sum+=ans(i,i)*ans(n/i,i);
            else sum+=ans(i,i);
        }
    return sum+1;
}
void solve (void)
{
    int n;cin>>n;  
    cout<<ans(n,2)<<'\n';

}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int _;cin>>_;
    while(_--)solve();
    return 0;
}