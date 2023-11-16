#include <bits/stdc++.h>
using namespace std;
struct node{
    int x,y,z;
}a[1000010];
bool cmp(node a,node b)
{
    if(a.x!=b.x)
        return a.x<b.x;
    else if(a.y!=b.y)
        return a.y<b.y;
    else return a.z<b.z;
}
int main()
{
    
    
    int N;cin>>N;
    while(N--)
    {
        int n,flag=0;
        cin>>n;
        int p=0;
        for(int i=1;i<pow(n,1.0/3);i++)
        {
            if(i%3==0)
                continue;
            else 
                for(int j=i+1;j<pow(n,2.0/3);j++)
                {
                    if(i%3==0)
                        continue;
                    else
                        for(int k=j+1;k<n;k++)
                        {
                            if(i%3==0)
                                continue;
                            else
                                if(i*j*k==n&&flag==0)
                                {
                                    cout<<"YES"<<'\n';
                                    a[p].x=i,a[p].y=j,a[p].z=k;
                                    p++;
                                    flag=1;
                                }
                                else if(i*j*k==n&&flag==1)
                                {
                                    a[p].x=i,a[p].y=j,a[p].z=k;
                                    p++;
                                }

                        }

                }
                
        }
        if(flag==0)
        {
                cout<<"NO"<<'\n';
                continue;
        }
        sort(a,a+p,cmp);
        for(int i=0;i<p;i++)
            cout<<a[i].x<<' '<<a[i].y<<' '<<a[i].z<<'\n';
    }
    return 0;
}