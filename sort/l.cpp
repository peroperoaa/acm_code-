#include <bits/stdc++.h>
using namespace std;
const int N=110;
struct msg{
    char ID[20];
    int id;
    int age;
}m[N];
bool cmp(msg a,msg b)
{
    if(a.age==b.age)
        return a.id<b.id;
    else if(a.age>=60)
        return a.age>b.age;
    else if(b.age>=60)
        return a.age>b.age;
    else
        return a.id<b.id;
}
int main()
{
    int fi=1;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m[i].ID>>m[i].age;
        m[i].id=i;
    }
    sort(m,m+n,cmp);
    for(int i=0;i<n;i++)
        if(fi)
        {
            cout<<m[i].ID;
            fi=0;
        }
        else
            cout<<'\n'<<m[i].ID;
    return 0;
}