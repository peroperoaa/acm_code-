#include <bits/stdc++.h>
#define int long long 
using namespace std;
const int N = 1e3 + 10;
int val[N], vol[N];
int dp[N][N];
void solve(void)
{
    memset(dp, 0, sizeof(dp)); //init 
    int n, v; cin >> n >> v;
    for(int i = 1; i <= n; i++) cin >> val[i];
    for(int i = 1; i <= n; i++) cin >> vol[i];
    for(int i = 1; i <= n; i++)
        for(int j = 0; j <= v; j++)
            if(j - vol[i] >= 0) 
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - vol[i]] + val[i]);
            else dp[i][j] = dp[i - 1][j];
    cout << dp[n][v];
}
signed main()
{
    int _; cin >> _;
    while(_--) solve();
    return 0;
}