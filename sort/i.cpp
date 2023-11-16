#include<bits/stdc++.h>
using namespace std;
const int N=20;
int a[N],b[N];//a obb b even
int i,p;
bool cmp(int a, int b)
{
    return a>b;
}
int main()
{
    int fi=1;
    for(int j=0;j<10;j++)
    {
        int x;cin>>x;
        if(x%2!=0)
            a[i++]=x;
        else
            b[p++]=x;
    }
    sort(a,a+i,cmp);
    sort(b,b+p);
    for(int j=0;j<i;j++)
        if(fi)
        {
            cout<<a[j];
            fi=0;
        }
        else
        {
            cout<<' '<<a[j];
        }
    for(int j=0;j<p;j++)
        if(fi)
        {
            cout<<b[j];
            fi=0;
        }
        else
        {
            cout<<' '<<b[j];
        }
    return 0;
}
