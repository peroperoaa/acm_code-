#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[1010];
int ans(int n)
{
    int sum = 1;
    if(n == 1) return 1;
    else if(a[n]) return a[n];
    for(int i = 1; i <= n / 2; i++)
        sum += ans(i);
    return a[n] = sum;
}
signed main()
{
    int n;
    cin >> n;
    cout << ans(n);
    return 0;
}