#include <bits/stdc++.h>
using namespace std;
char atc[310];
int num[310];
int cnt;
int Size(int n)
{
    int cnt=0;
    while(n>0)
    {
        n/=10;
        cnt++;
    }
    return cnt;
}
int main()
{
    fgets(atc,sizeof(atc),stdin);
    for(int i=0;i<strlen(atc);)
    { 
        if(atc[i]=='0')
        {
            sscanf(&atc[i],"%d",&num[cnt++]);
            i+=Size(num[cnt-1])+1;
        }
        else if(atc[i]>'0'&&atc[i]<='9')
        {
            sscanf(&atc[i],"%d",&num[cnt++]);
            i+=Size(num[cnt-1]);
        }
        else i+=1;
    }
    sort(num,num+cnt);
    for(int i=0;i<cnt;i++)
        printf(",%d"+!i,num[i]);
    if(cnt==0)
        printf("0");
    return 0;
}