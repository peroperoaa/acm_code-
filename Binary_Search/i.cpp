#include <bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int a[N];
int n,xl=1,yl=1,xr,yr;
bool checkx(int mid)
{
    cout<<"? "<<yl<<' '<<yr<<' '<<xl<<' '<<mid<<endl;
    int num;cin>>num;
    if((mid-xl+1)>num)return true;
    else return false;
}
bool checky(int mid)
{
    cout<<"? "<<yl<<' '<<mid<<' '<<xl<<' '<<xr<<endl;
    int num;cin>>num;
    if((mid-yl+1)>num)return true;
    else return false;
}
int main()
{
    cin>>n;xr=n,yr=n;
    while(yl!=yr-1)
    {
            int mid=(yl+yr)>>1;
            if(checky(mid))yr=mid;
            else yl=mid;
            // printf("%d %d %d %d\n",yl,xl,yr,xr);//
    }
    int ansy,ansx;
    // printf("%d\n",yl);
    if(checky(yl))ansy=yl;
    else ansy=yr;
    // printf("%d %d %d %d\n",yl,xl,yr,xr);//
    xl=1,yl=1,xr=n,yr=n;
    while(xl!=xr-1)
    {
            int mid=(xl+xr)>>1;
            if(checkx(mid))xr=mid;
            else xl=mid;
            // printf("%d %d %d %d\n",yl,xl,yr,xr);//
    }
    // printf("%d\n",xl);
    if(checkx(xl))ansx=xl;
    else ansx=xr;
    // printf("%d %d %d %d\n",yl,xl,yr,xr);//
    // printf("%d %d %d %d\n",yl,xl,yr,xr);//
    printf("! %d %d",ansy,ansx);
    return 0;
}