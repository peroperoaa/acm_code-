#include <bits/stdc++.h>
using namespace std;
const int N=1e2+10;
struct node{
    int begin,end;
}a[N];
bool cmp(const node &a,const node &b)
{
    return a.end<b.end;
}
int main()
{
    int n;
    while((cin>>n)&&(n!=0))
    {
        int cnt=0;
        for(int i=0;i<n;i++)
            cin>>a[i].begin>>a[i].end;
        sort(a,a+n,cmp);
        int lastend=0;
        for(int i=0;i<n;i++)
        {
            if(a[i].begin>=lastend)
            {
                lastend=a[i].end;
                cnt++;
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}