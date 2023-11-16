#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mypow(int a,int n)
{
    int num=1;
    for(int i=1;i<=n;i++)num*=a;
    return num;
}
ll w(int a,int b,int c)
{
    if(a<=0||b<=0||c<=0)return 1;
    else if(a>20||b>20||c>20)return w(20,20,20);
    else if(a<b&&b<c)return mypow(2,a);
    else return w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1, b-1, c-1);
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int a,b,c;
    while(1)
    {
        cin>>a>>b>>c;
        if(a==-1&&b==-1&&c==-1)break;
        printf("w(%d, %d, %lld) = %d\n",a,b,c,w(a,b,c));
    }
    return 0;
} 