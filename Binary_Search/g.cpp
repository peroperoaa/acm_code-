#include <bits/stdc++.h>
using namespace std;
const int N=18;
double a[N];
int n;
double l,r;
double f(double x)
{
    double sum=0,temp=1;
    for(int i=0;i<=n;i++)
        sum+=pow(x,i)*a[i];
    return sum;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    cin>>n>>l>>r;
    for(int i=n;i>=0;i--)
        cin>>a[i];
    double lmid,rmid;
    while(fabs(l-r)>1e-8)
    {
        lmid=l+(r-l)/3,rmid=l+(r-l)/3*2;
        if(f(lmid)<f(rmid))l=lmid;
        else r=rmid;
    }
    printf("%.5f",l);
    return 0;
}