#include <bits/stdc++.h>
using namespace std;
void solve(void)
{
    long long sum = 0;
    vector<long long> v((long long)8e4 + 10, 0), stk((long long)8e4 + 10, 0);
    long long  n, top = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    for(int i = n - 1; i >= 0; i--)
    {
        while(top || v[i] >= v[stk[top]])
            top--;
        if(top)
            sum += stk[top] - i - 1;
        else
            sum += n - i - 1;
        stk[++top] = i;
    }
    cout << sum;
}
signed main()
{
    int _ = 1;
    while(_--)
        solve();
    return 0;
}