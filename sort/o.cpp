#include <bits/stdc++.h>
using namespace std;
const int N=1e2+10;
struct per{
    char name[100];
    int s;
}a[N];
bool cmp(per a,per b)
{
    return a.s<b.s;
}
int main()
{
    int n,k;cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i].name>>a[i].s;
    sort(a,a+n,cmp);
    cout<<a[k-1].name;
    return 0;
}