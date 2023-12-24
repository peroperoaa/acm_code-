#include <bits/stdc++.h>
using namespace std;
int a[4];
int val[30];
long long ans;
int dfs(int i, int val1, int val2, int idx)
{
    if(i == a[idx]) return max(val1, val2);
    else return min(dfs(i + 1, val1 + val[i], val2, idx), dfs(i + 1, val1, val2 + val[i], idx));
}
int main()
{
    for(int i = 0; i < 4; i++)
        cin >> a[i];
    for(int i =0; i < 4; i++)
    {
        for(int j = 0; j < a[i]; j++)
            cin >> val[j];
        ans += dfs(0, 0, 0, i);
    }
    cout << ans;
    return 0;
}