#include <bits/stdc++.h>
using namespace std;
const int N=3e5+10;
struct node{
    long long value,vl;
}a[N];
long long sum;
bool cmp(node a,node b)
{
    return a.value>b.value;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,w;cin>>n>>w;
    for(int i=0;i<n;i++)
        cin>>a[i].value>>a[i].vl;
    sort(a,a+n,cmp);
    cout << N;
    int p=0;
    while(w>0&&p<n)
    {
        if(a[p].vl<=w)
        {
            w-=a[p].vl;
            sum+=a[p].value*a[p].vl;
            p+=1;
        }
        else
        {
            sum+=w*a[p].value;
            w=0;
        }
    }
    cout<<sum;
    return 0;
}