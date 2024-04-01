#include <bits/stdc++.h>
#define int long long 
using namespace std;
<<<<<<< HEAD

void solve(void)
{
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int temp; cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int  mn = LONG_LONG_MAX;
    for(int i = 0; i < n - 1; i++)
        mn = min(mn, v[i + 1] - v[i]);
    // cout << mn;
    if(mn == 0)
    cout << n << endl;
    else
    cout << (v[n - 1] - v[0]) / mn + 1;
}
signed main()
{
    int t = 1; 
    // cin >> t;
    while(t--) solve();   
    return 0;
=======
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
>>>>>>> 8465cf40c4db3ab2ad7eea65366606de61e1022f
}