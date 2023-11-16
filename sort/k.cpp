#include <bits/stdc++.h>
using namespace std;
const int N=45;
double man[N],woman[N];
int p,q;
bool cmp(double a,double b)
{
    return a>b;
}
int main()
{
    int fi=1;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        char scan[10];
        cin>>scan;
        if(scan[0]=='m')
            cin>>man[p++];
        else
            cin>>woman[q++];
    }
    sort(man,man+p);
    sort(woman,woman+q,cmp);
    for(int i=0;i<p;i++)
        if(fi)
        {
            fi=0;
            printf("%.2f",man[i]);
        }
        else 
            printf(" %.2f",man[i]);
    for(int i=0;i<q;i++)
        if(fi)
        {
            fi=0;
            printf("%.2f",woman[i]);
        }
        else 
            printf(" %.2f",woman[i]);
    return 0;
}