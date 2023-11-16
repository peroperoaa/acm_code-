#include<bits/stdc++.h>
using namespace std;
const int N=5e2;
int a[N];
int main()
{
    int fi=1;
    int n;cin>>n;
    int i=0;
    for(int j=0;j<n;j++)
    {
        int x;cin>>x;
        if(x%2!=0)
            a[i++]=x;
    }
    sort(a,a+i);
    for(int j=0;j<i;j++)
        if(fi)
        {
            cout<<a[j];
            fi=0;
        }
        else
        {
            cout<<','<<a[j];
        }
    return 0;
}