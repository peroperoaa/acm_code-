//value exchange 
//compare value 
#include <bits/stdc++.h>
using namespace std;
const int N=1e2+10;
int num[N],sum;
void solve(int avr,int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(num[i]<avr)
        {
            cnt++;
            num[i+1]-=avr-num[i];
            continue;
        }
        else if(num[i]>avr)
        {
            num[i+1]+=num[i]-avr;
            cnt++;
        }
    }
    cout<<cnt;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
        sum+=num[i];
    }
    int avr=sum/n;
    solve(avr,n);
    return 0;
}