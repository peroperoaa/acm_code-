#include <bits/stdc++.h>
#define sp ' '
#define int long long 
using namespace std;
const int N = 1e6 + 10;
int sum;
int Map[N], a[N], ans[N];
signed main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        ++Map[a[i]];
        sum += a[i];
    }
    for(int i = 0; i < N; i++)
    {
        sum -= Map[i] * i;
        ans[i] = sum;
    }
    for(int i = 0; i < n; i++)
        cout << ans[a[i]] << sp;
}