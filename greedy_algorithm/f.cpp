#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,n;cin>>h>>m>>n;
    int Max=max(h,m);
    if(n%Max==0)
        cout<<n/Max;
    else
        cout<<n/Max+1;
    return 0;
}