#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=25;
int t[N][N][N];
ll mypow(ll a,ll n)
{
    int num=1;
    for(int i=1;i<=n;i++)num*=a;
    return num;
}
ll w(ll a,ll b,ll c)
{
    if(a<=0||b<=0||c<=0)return 1;
    else if(a>20||b>20||c>20)return w(20,20,20);
    else if(t[a][b][c])return t[a][b][c];
    else if(a<b&&b<c)
    {
        t[a][b][c]=w(a,b,c-1) + w(a,b-1,c-1)-w(a,b-1,c);
        return w(a,b,c-1) + w(a,b-1,c-1)-w(a,b-1,c);;
    }
    else
    {
        t[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
        return t[a][b][c];
    }
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll a,b,c;
    while(1)
    {
        cin>>a>>b>>c;
        if(a==-1&&b==-1&&c==-1)break;
        printf("w(%lld, %lld, %lld) = %d\n",a,b,c,w(a,b,c));
    }
    return 0;
} 