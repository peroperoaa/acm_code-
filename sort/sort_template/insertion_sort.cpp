#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int main()
{
    //遍历i次 每次选择a[i]倒序插入已排序part
    int n;cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
    {   
        int now=a[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>now)
                a[j+1]=a[j];
            else break;
        }
        a[j+1]=now;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
    cout<<'\n';
    return 0;
}