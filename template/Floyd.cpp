#include <bits/stdc++.h>
using namespace std;
const int N = 200;
struct Edge{
    int x, w;
};
int n, m;
int dis[N][N];
void floyd(void)
{
    for(int k = 1; k <= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[j][k]);
}
int main()
{
    cin >> n >> m;
    memset(dis, 0x3f, sizeof(dis));//init dis -> inf
    for(int i = 0; i < m; i++)// graph
    {
        int u, v, w; cin >> u >> v >> w;
        dis[u][v] = min(dis[u][v], w);
        dis[v][u] = dis[u][v];
    }
    for(int i = 1; i <= n; i++) dis[i][i] = 0;//init special side
    floyd();
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << dis[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}