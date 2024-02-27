#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int a[N], n, _;
void solve()
{
    int x;cin >> x;
    int l = 0,r = n;
    while(l + 1 != r)
    {
        int mid=(l + r)/2;
        if(a[mid] < x)l = mid;
        else r = mid;
    }
    if(a[r] == x)cout << r << ' ';
    else cout << -1 << ' ';
}
int main()
{  
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; i++)cin >> a[i];
    while(_--) solve();
    return 0;
}