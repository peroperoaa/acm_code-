#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
struct {
    int a,b;
    int min,max;
}cholen[N];
int n,k;
int check (int x)
{
    int l=0,r=N;
    while(l!=r-1)//二分巧克力边长
    {
        int mid=(l+r)>>1; 
        int amid=0;
        for(int i=1;i<=n;i++)
            amid+=(cholen[i].min/mid)*(cholen[i].max/mid);//计算该边长下巧克力可被分为几块
        if(amid>=x)l=mid;
        else r=mid;
    }
    return l;
}
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        int a,b;cin>>a>>b;
        cholen[i].a=a;
        cholen[i].b=b;
        cholen[i].min=min(a,b);
        cholen[i].max=max(a,b);
    }
    cout<<check(k);
    return 0;
}