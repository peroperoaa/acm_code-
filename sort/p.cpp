#include <bits/stdc++.h>
using namespace std;
const int N=1e2+10;
struct S{
    char str[266];
    int len,num1;
}a[N];
int Cnt(char a[])
{
    int cnt=0;
    for(int i=0;i<strlen(a);i++)
        if(a[i]=='1')
            cnt++;
    return cnt;
}
bool cmp(S a,S b)
{
    if(a.len!=b.len)
        return a.len<b.len;
    else if(a.num1!=b.num1)
        return a.num1<b.num1;
    else 
        return strcmp(a.str,b.str)<0;
}
int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].str;
        a[i].len=strlen(a[i].str);
        a[i].num1=Cnt(a[i].str);
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
        printf("\n%s"+!i,a[i].str);
}