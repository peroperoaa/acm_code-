#include <cstdio>
#include <cmath>
typedef long double ld;
ld a,b,ans;
ld f(long long time)
{
    return (time-1)*b+a/sqrt(time);
}
int main()
{
    scanf("%Lf %Lf",&a,&b);
    long long l=0,r=1e18+1;
    while(l<=r)
    {
        long long mid=(l+r)>>1;
        if(f(mid+1)>=f(mid)) r=mid,ans=f(mid);
		if(f(mid)>=f(mid-1)) r=mid-1,ans=f(mid);
		else l=mid+1;
    }
    printf("%.10Lf",ans);
    return 0;
}