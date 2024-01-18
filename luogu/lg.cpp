#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n, top = 0;
    cin >> n;
    int p;
    int ans = long LONG_LONG_MIN;
    cin >> p;
    for(int i = 1; i < n; i++)
    {
        int temp;
        cin >> temp;
        if(ans < temp - p)ans = temp - p;
        if(temp < p)p = temp;
    }
    cout << ans;
    return 0;
}