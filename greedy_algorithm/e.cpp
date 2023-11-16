#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int value,cnt=1;
int a[N];
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(value+a[i]>m)
        {
            value=0;
            ++cnt;
        }
        value+=a[i];
    }
    cout<<cnt;
    return 0;
}