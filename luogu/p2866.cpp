#include <bits/stdc++.h>
#define long long int
using namespace std;
void solve(void)
{
    int sum = 0;
    vector<int> v((int)8e4 + 10, 0), stk((int)8e4 + 10, 0);
    int n, top = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    for(int i = n - 1; i >= 0; i--)
    {
        while(top && v[i] >= v[stk[top]])
            top--;
        if(top)
            sum += stk[top] - i - 1;
        else
            sum += n - i - 1;
        stk[++top] = i;
    }
    cout << sum;
    // stk[0] = v[0];
    // int top = 0;
    // for(int i = 1; i < n; i++)
    // {
    //     if(v[i] <= stk[top])
    //         top = 0;
    //     sum += top;
    //     cout << sum << endl;
    //     stk[++top] = v[i];
    // }
    // cout << sum;
}
signed main()
{
    int _ = 1;
    while(_--)
        solve();
    return 0;
}