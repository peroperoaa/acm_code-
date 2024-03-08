//sort
#include <bits/stdc++.h>
using namespace std;
const int N=2e4+10;
int man[N],head[N],cnt=0;
int main()
{
    // ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>head[i];
    for(int i=0;i<m;i++)
        cin>>man[i];
    sort(man,man+m);
    sort(head,head+n);
    if(man[m-1]<head[n-1]||n>m)
    {
        cout<<"you died!";
        return 0;
    }
    int q=0,p;
    for(p=0;p<m;p++)
    {
        if(man[p]>=head[q])
        {
            cnt+=man[p];
            q++;
        }
        if(n==q)break;
    }

    if(q==n)cout<<cnt;
    else cout<<"you died!";
    return 0;
}