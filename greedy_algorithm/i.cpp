#include <bits/stdc++.h>
using namespace std;
const int N=1e6+10;
struct node{
    int begin,end;
}a[N];
bool cmp(const node &a,const node &b)
{
    return a.end<b.end;
}
int main()
{
    int n;cin>>n;
    int lastEnd=0;
    for(int i=0;i<n;i++)
        cin>>a[i].begin>>a[i].end;
    int p=0;
    sort(a,a+n,cmp);
    int cnt=0;
    while(p<n)
    {
        if(a[p].begin>=lastEnd)
        {
            lastEnd=a[p].end;
            cnt++;
        }
        p++;
    }
    cout<<cnt;
    return 0;
}