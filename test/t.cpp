#include <bits/stdc++.h>
#define int long long 
using namespace std;
const int N = 1e5 + 10;
int a[N];
int dp[N];
bool obb = 1, even;
long long sumobb = -1111, sumeevn = -1111;
void solve(void)
{
    //init
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2)//obb
        {
            if(a[i] > 0 && obb)
            {
                if(sumobb > 0)sumobb+=a[i];
                else sumobb=a[i];
                    
            }
            else sumobb = max(sumobb, a[i]);
            obb = 0;
        }
        else if(a[i] % 2)
        {
            if(a[i] > 0 && even)
            {
                if(sumobb > 0)sumobb+=a[i];
                else sumobb=a[i];
                    
            }
            else sumobb = max(sumobb, a[i]);
        }
        else
        {

        }
    }
}
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int _; cin >> _;
    while(_--) solve();
    return 0;
}