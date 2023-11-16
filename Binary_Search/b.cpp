#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,c,cnt;
int a[N];
int check(int x)
{
    int l=0,r=n;
    while(l+1!=r)
    {
        int mid=(l+r)>>1;
        if(a[mid]<x)l=mid;
        else r=mid;
    }
    if(a[r]==x)return r;
    else return false;
}
int main()
{  
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>c;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    int p=1;
    while(a[p]+c<=a[n]&&p<n)
    {
        int rt_p=check(a[p]+c);
        int rt_v=a[rt_p];
        long long cntf=0,cntl=0;
        if(rt_p)
            {
                for(int i=rt_p;a[i]==rt_v;i++)
                    cntl++;
                for(int i=p;a[i]==a[p];i++)
                    cntf++;
                cnt+=cntl*cntf;
                p+=cntf-1;
            }
        p++;
    }
    cout<<cnt;
    return 0;
}