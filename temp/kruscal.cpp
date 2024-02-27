#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 10;
int pre[N];
int ans, cnt;
int root(int u){return pre[u] = (pre[u] == u? u: root(pre[u]));}
bool isCon(int u, int v) {return root(u) == root(v);}
void merge(int u, int v) {pre[root(u)] = root(v);}
struct node{int a, b, w;}rd[N];
bool cmp(node a, node b) {return a.w < b.w;}
signed main()
{
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++) pre[i] = i;
    for(int i = 0; i < m; i++)
    {
        int a, b, w; cin >> a >> b >> w;
        rd[i].a = a, rd[i].w = w, rd[i].b = b;
    }
    sort(rd, rd + m, cmp);
    for(int i = 0; i < m; i++)
    {
        if(!isCon(rd[i].a, rd[i].b))
        {
            merge(rd[i].a, rd[i].b), ans += rd[i].w;
        }
    }
    for(int i = 1; i <= n; i++)
        if(root(i) == i) cnt++;
    if(cnt == 1) cout << ans;
    else cout << -1;
    return 0;
}