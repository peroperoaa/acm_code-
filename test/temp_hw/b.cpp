#include <bits/stdc++.h>
#define int long long 
using namespace std;
signed main()
{
    int l ,r; cin >> l >> r;
    cout << r / 4 - (l - 1) / 4 + (r + 1) / 2 - l / 2;
    return 0;
}