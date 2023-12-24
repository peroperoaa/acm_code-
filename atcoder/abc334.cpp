#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll a, m, l, r, ans = 0;
    cin >> a >> m >> l >> r;
    if((max(l, a) - min(l, a)) % m != 0)
    {
        if(l < a)
            l += (max(l, a) - min(l, a)) % m;
        else
            l += (m - ((max(l, a) - min(l, a)) % m)) % m;
        if(l > r)
            ans--;
    }
    if((max(r, a) - min(r, a)) % m != 0)
    {
        if(r < a)
            r += (max(r, a) - min(r, a)) % m;
        else
            r += (m - ((max(r, a) - min(r, a)) % m)) % m;
        if(l != r)
            ans--;
    }
    ans += (r - l) / m + 1;
    cout << ans;
    return 0;
}