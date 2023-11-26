#include <bits/stdc++.h>
using namespace std;
#define int long long 
int a, b, c;
bool check(int n)
{
    int res = (a + b + c) / n;
    if(res * n != (a + b + c))
        return false;
    if(a % res == 0 && b % res == 0 && c % res == 0)
        return true;
    else return false;
}
void solve(void)
{
    cin >> a >> b >> c;
    if(check(3) || check(4) || check(5) || check(6))
        printf("YES\n");
    else printf("NO\n");
}
signed main(void)
{
    int _;
    cin >> _;
    while(_--)
        solve();
    return 0;
}