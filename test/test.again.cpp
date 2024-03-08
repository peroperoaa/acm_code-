#include <bits/stdc++.h>
#define int long long 
using namespace std;
long long ans = LONG_LONG_MAX, res;
const int N = 10;
struct node{
    int x, y, v;
}r[N * N];
int pre[N];
int n, m, k;
int root (int u) 
{
    if(pre[u] == u) return u;
    else return root(pre[u]);
}
void merge (int u, int v) {pre[root(u)] = root(v);}
bool check (int as)
{
    for(int i = 1; i < n; i++)
    {
        if(root(i) != as) return false;
    }
    return true;
}
void dfs(int i)
{
    // cout<< i << endl;
    int temp;
    if(i == m)
    {
        int rt = root(0);
        if(check(rt)) ans = min(ans, res);
        return ; 
    }
    int tempp;
    if(root(r[i].x - 1) == root(r[i].y - 1)) goto ass;
    res = (res + r[i].v) % k;
    tempp = root(r[i].x - 1);
    temp = pre[root(r[i].x - 1)];
    merge(r[i].x - 1, r[i].y - 1);
    // cout << r[i].x << ' ' << r[i].y << endl;
    dfs(i + 1);
    res -= r[i].v;
    pre[tempp] = temp;
    if(res < 0) res += k;
    ass:;
    dfs(i + 1);
}
signed main()
{
    for(int i = 0; i < N; i++) pre[i] = i;
    cin >> n >> m >> k;
    // for(int i = 0; i < n; i++) pre[i] = i;//
    for(int i = 0; i < m; i++)
        cin >> r[i].x >> r[i].y >> r[i].v;
    dfs(0);
    cout << ans << endl;
}
