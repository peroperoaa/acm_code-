#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int pre[N], n, m, op, a, b;
int root(int u){return pre[u] = (pre[u] == u ? u : root(pre[u]));}
void merge(int u, int v){pre[root(u)] = root(v);}
bool isCon(int u, int v){return root(u) == root(v);}
void solve(void)
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        pre[i] = i;
    while(m--)
    {
        cin >> op >> a >> b;
        if(op == 1) merge(a, b);
        else if(isCon(a, b)) cout << "Y\n";
        else cout << "N\n";
    }
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int _ = 1;
    // cin >> _;
    while(_--) solve();
    return 0;
}