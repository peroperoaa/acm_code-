#include <cstdio>
const int N=1e6+10;
int a[N],n,m;
bool check(int max)
{
    int value=0,cnt=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)return true;
        if(value+a[i]<=max)
        {
            value+=a[i];
            continue;
        }
        else
        {
            ++cnt;
            value=a[i];
        }
    }
    if(cnt<=m)return false;
    else return true;
}
int main()
{
    scanf("%d %d",&n, &m);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int l=0,r=1e9;
    while(l!=r-1)
    {
        int mid=(l+r)/2;
        if(check(mid)) l=mid;
        else r=mid;
    }
    printf("%d",r);
    return 0;
}