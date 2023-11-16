#include <bits/stdc++.h>
using namespace std;
const int N=1e2+10;
struct dna{
    char dna[55];
    int cnt,id;
}a[N];
int jdg(char a[])
{
    int cnt=0;
    for(int i=0;i<strlen(a);i++)
        for(int j=i+1;j<strlen(a);j++)
            if(a[i]>a[j])cnt++;
    return cnt;
}
bool cmp(dna a,dna b)
{
    if(a.cnt!=b.cnt)
        return a.cnt<b.cnt;
    else
        return a.id<b.id;
}
int main()
{
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a[i].dna;
        a[i].id=i;
        a[i].cnt=jdg(a[i].dna);
    }
    sort(a,a+m,cmp);
    for(int i=0;i<m;i++)
    {   
        printf("\n%s"+!i,a[i].dna);
    }
    return 0;
}