#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
char a[N][N];
void solve(void)
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    int lt = n / 2;
    int ans = 0;
    for(int i = 0; i < lt; i++)
    {
        for(int j = 0; j < lt; j++)
        {  
            int Max = max({a[i][j], a[n - 1 - j][i], a[n - 1 - i][n - 1 -j], a[j][n - 1 - i]});
            ans += 4 * Max - (a[i][j] + a[n - 1 - j][i] + a[n - 1 - i][n - 1 -j] + a[j][n - 1 - i]);
        }
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0);
    int _;
    cin >> _;
    while(_--)solve();
    return 0;
}