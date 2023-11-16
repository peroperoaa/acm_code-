#include <bits/stdc++.h>
using namespace std;
const int N=1e3+10;
struct node{
    int level,exp;
}a[N];
bool cmp(node a,node b)
{
    if(a.level!=b.level)
        return a.level<b.level;
    else
        return a.exp>b.exp;
}
int main()
{
    int nowLevel,n;cin>>nowLevel>>n;
    for(int i=0;i<n;i++)
        cin>>a[i].level>>a[i].exp;
    sort(a,a+n,cmp);
    bool flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i].level>=nowLevel)
        {
            flag=1;
            break;
        }
        else
        {
            nowLevel+=a[i].exp;
        }
    }
    if(flag)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}