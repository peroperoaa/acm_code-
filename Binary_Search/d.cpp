#include <iostream>
using namespace std;
const int N=1e4+10;
int n,k;
int a[N];
bool check(int mid)
{
    long long sum=0;
    for(int i=1;i<=n;i++)
        sum+=a[i]/mid;
    if(sum>=k) return true;
    else return false;
}
int main()
{
    // ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        double temp;cin>>temp;
        a[i]=(int)(temp*100);
    }
    int l=0,r=1e5;
    while(l+1!=r)//二分网线长度
    {
        int mid=(l+r)>>1;
        if(check(mid))
            l=mid;
        else
            r=mid;
    }
    if(l<1)
        cout<<"0.00";
    else printf("%.2f",l/100.0);
}