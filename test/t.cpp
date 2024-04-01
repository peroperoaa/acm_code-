#include <bits/stdc++.h>
#define int long long 
using namespace std;

void solve(void)
{
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int temp; cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int  mn = LONG_LONG_MAX;
    for(int i = 0; i < n - 1; i++)
        mn = min(mn, v[i + 1] - v[i]);
    // cout << mn;
    if(mn == 0)
    cout << n << endl;
    else
    cout << (v[n - 1] - v[0]) / mn + 1;
}
signed main()
{
    int t = 1; 
    // cin >> t;
    while(t--) solve();   
    return 0;
}