#include <bits/stdc++.h>
using namespace std;
int a[50010];
int L,N,M;
bool check(int mid)
{
    int cnt=0,now=1;
    for(int i=2;i<=N+2;i++)
        if(a[i]-a[now]<mid)
            cnt++;
        else now=i;
    if(cnt<=M)return true;
    else return false;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>L>>N>>M;
    a[1]=0,a[N+2]=L;//起点 终点石头
    for(int i=2;i<=N+1;i++)
        cin>>a[i];
    int l=0,r=1e9;
    while(l!=r-1)//二分最短跳跃距离
    {
        int mid=(l+r)>>1;
        if(check(mid))l=mid;
        else r=mid;
    }
    cout<<l;
    return 0;
}//边界条件有点臭
