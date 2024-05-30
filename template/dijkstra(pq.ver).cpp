#include <bits/stdc++.h>
#define ll long long 
using namespace std;
const int N = 1e5 + 10;
int n, m, s, dis[N];
struct edge{
    int x, w;
    bool operator < (const edge &v)const
    {
        return w == v.w ? x < v.x : w > v.w;
    }
};
vector<edge> g[N];
void dijkstra(int s)
{
    memset(dis, 0x3f, sizeof(dis));//init
    dis[s] = 0;//init

    bitset<N> vis;
    priority_queue<edge> pq;
    pq.push({s, dis[s]});
    while(pq.size())
    {
        int x = pq.top().x; pq.pop();
        if(vis[x]) continue;
        vis[x] = true;

        for(auto &[y, w] : g[x])
            if(!vis[y] && dis[y] > dis[x] + w)
            {
                dis[y] = dis[x] + w;
                pq.push({y, dis[y]});
            }
    }
}
int main()
{
    cin >> n >> m >> s;
    for(int i = 0; i < m; i++)
    {
        int u, v, w; cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    dijkstra(s);
    for(int i = 1; i <= n; i++)
        cout << (dis[i] == 0x3f3f3f3f ? INT_MAX : dis[i]) << ' ';// 到不了输出INT_MAX
    return 0;
}