#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
int a[N];
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int _;cin>>_;
    while(_--)
    {
        int n;cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        ll Max=-1e9;
        int flag=!(a[0]%2);
        ll sum=a[0];
        Max=max(sum,Max);
        int p=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]%2==flag)
            {
                sum+=a[i];
                flag=!(a[i]%2);
            }
            else 
            {
                // for(int j=p;a[j]<=0&&j<=i;j++)
                //     sum-=a[j];
                // for(int j=i;a[j]<=0&&j>=p;j--)
                //     sum-=a[j];
                Max=max(sum,Max);
                sum=a[i];
                p=i;
                flag=!(a[i]%2);
            }
        }
        for(int j=p;a[j]<=0;j++)
            sum-=a[j];
        // for(int j=n-1;a[j]<=0&&j>=p;j--)
            // sum-=a[j];
        Max=max(sum,Max);
        cout<<Max<<'\n';
    }
    return 0;
}