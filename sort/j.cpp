#include <bits/stdc++.h>
using namespace std;
const int N=1e2+10;
struct str{
    char str[210];
    int num;
    int id;
}s[N];
bool cmp(str a, str b)
{
    if(a.num!=b.num)
        return a.num<b.num;
    else
        return a.id<b.id;
}
int main()
{
    int fi=1;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i].str;
        s[i].id=i;
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<strlen(s[i].str);j++)
            if(s[i].str[j]=='1')
                s[i].num++;
    
    sort(s,s+n,cmp);
    for(int i=0;i<n;i++)
    if(fi)
    {
        cout<<s[i].str;
        fi=0;
    }
    else
        cout<<'\n'<<s[i].str;
    return 0;
}