#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int main()
{
    //����i�Σ�ÿ��ȷ��i��i+1�Ƿ񽻻�λ��
    int n;cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<n-i-1;j++)
            {
                if(a[j+1]<a[j])
                {
                    int Swap;
                    Swap=a[j+1];
                    a[j+1]=a[j];
                    a[j]=Swap;
                    continue;
                }
            }
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
    cout<<'\n';
    return 0;
}