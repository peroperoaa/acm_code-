// #include <bits/stdc++.h>
// using namespace std;
// const int N=5e3+10;
// const int len=3e4+10;
// int stree,shigh;
// int diff[len],a[len];
// int main()
// {
//     int n,h;cin>>n>>h;
//     for(int i=0;i<h;i++)
//     {
//         int a,b,c;cin>>a>>b>>c;
//         diff[a]++;diff[b+1]--;stree+=c;
//     }
//     for(int i=0;i<n;i++)
//     {
//         a[i]=a[i-1]+diff[i];
//         if(a[i]>1)
//             shigh++;
//     }
//     cout<<stree-shigh;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
const int N=5e3+10;
const int len=3e4+10;
struct node{
    int begin,end;
    int need;
}a[N];
int tree[len],cnt;
bool cmp(node a,node b)
{
    if(a.end!=b.end)
        return a.end<b.end;
    else 
     return a.begin<b.begin;
}
int main()
{
    int n,h;cin>>n>>h;
    for(int i=0;i<h;i++)
        cin>>a[i].begin>>a[i].end>>a[i].need;
    sort(a,a+h,cmp);

    for(int i=0;i<h;i++)
    {
        for(int j=a[i].begin;j<=a[i].end;j++)
            if(tree[j])
                a[i].need--;
        if(a[i].need>0)
        {
            for(int j=a[i].end;a[i].need;j--)
                if(!tree[j])
                {
                    a[i].need--;
                    tree[j]++;
                }
        }
    }

    for(int i=0;i<len;i++)
         if(tree[i])
            cnt++;
    cout<<cnt;
    return 0;
}
