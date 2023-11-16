#include <bits/stdc++.h>
using namespace std;
const int N=3e4+10;
bool cmp(int a,int b)
{
    return a>b;
}
long long a[N],b[N],dlt[N];//a--n b--m
int main()
{
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    sort(b,b+m);
    int p=0;
    for(int i=0;i<n;i++)//en
    {
        for(int j=0;j<m;j++)//pao
        {
            if(b[j]>=a[i])
            {
                long long Max;
                if(j==0)
                    Max=abs(b[j]-a[i]);
                else Max=max(abs(b[j]-a[i]),abs(a[i]-b[j-1]));
                    dlt[p++]=Max;
                break;
            }
            if(j==m-1&&b[j]<a[i])
            {
                dlt[p++]=abs(a[i]-b[j]);
            }
        }
    }
    sort(dlt,dlt+p,cmp);
    cout<<dlt[0];
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// const int N=3e4+10;
// int a[N],b[N],dlt[N];//a--n b--m
// bool cmp(int a,int b)
// {
//     return b>a;
// }
// int main()
// {
//     int n,m;cin>>n>>m;
//     for(int i=0;i<n;i++)
//         cin>>a[i];
//     for(int i=0;i<m;i++)
//         cin>>b[i];
//     sort(b,b+m);
//     int p=0;
//     for(int i=0;i<n;i++)//en
//     {
//         for(int j=0;j<m;j++)//pao
//         {
//             if(b[j]>a[i])
//             {
//                 int Max;
//                 if(j==0)
//                     Max=b[j]-a[i];
//                 else Max=max(b[j]-a[i],a[i]-b[j-1]);
//                     dlt[p++]=Max;
//                 break;
//             }
//             if(j==m-1&&b[j]<a[i])
//             {
//                 dlt[p++]=a[i]-b[j];
//             }
//         }
//         // cout<<dlt[p-1]<<'\n';//
//     }
//     sort(dlt,dlt+p,cmp);//
//     for(int i=0;i<p;i++)//
//         cout<<"\n"<<dlt[i];//
//     // cout<<dlt[0];
//     return 0;
// }