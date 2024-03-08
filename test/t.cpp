#include <bits/stdc++.h>
#define int long long 
using namespace std;
const int N = 10;
struct node{
    int x, y, v;
}r[N * N];
int pre[N];
int root (int u) {return pre[u] = (pre[u] == u ? u : root(pre[u]));}
void merge (int u, int v) {pre[root(u)] = root(v);}
bool isCon (int u, int v) {return root(u) == root(v);}
bool cmp (node a, node b) {return a.v < b.v;}
signed main()
{
    for(int i = 0; i < N; i++) pre[i] = i;
    int n, m, k; cin >> n >> m >> k;
    for(int i = 0; i < m; i++)
        cin >> r[i].x >> r[i].y >> r[i].v;
    sort(r, r + m, cmp);    
    long long ans = 0;
    for(int i = 0; i < m; i++)
    {
        if(!isCon(r[i].x, r[i].y))
        {
            // cout << r[i].x << ' ' << r[i].y << ' ' << r[i].v << endl; 
            merge(r[i].x, r[i].y);
            ans = (ans + r[i].v) % k;
        }
    }
    cout << ans << endl;
}