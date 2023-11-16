#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int main()
{
    //遍历i 选择i后面最小的数与a[i]交换位置
    int n;cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        int Min=2e9;
        for(int j=i;j<n;j++)
            if(Min>a[j])                //**********
            {                           // *********
                Min=a[j];               //  ********
                int Swap;               //   
                Swap=a[j];              //        **
                a[j]=a[i];              //         *
                a[i]=Swap;//遍历i并遍历a[i]后的数 若小于则swap
                continue;
            }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
    cout<<'\n';
    return 0;
}