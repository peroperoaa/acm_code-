#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int main()
{
    //����i ѡ��i������С������a[i]����λ��
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
                a[i]=Swap;//����i������a[i]����� ��С����swap
                continue;
            }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
    cout<<'\n';
    return 0;
}