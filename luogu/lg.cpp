#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 3e6 + 10;
signed main()
{
    vector<int> stk(N, 0), v(N, 0), ans(N, 0);
    int top = 0;
    int n;cin >> n;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    for(int i = n - 1; i >= 0; i--)
    {
        while(top && v[i] >= v[stk[top]])
            top--;
        if(top)
            ans[i] = stk[top] + 1;
        stk[++top] = i;
    }
    for(int i = 0; i < n; i++)
        cout << ans[i] << ' ';
    return 0;
}