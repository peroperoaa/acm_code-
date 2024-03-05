#include <bits/stdc++.h>
using namespace std;
const int N = 5e2 + 10;
struct node {
    int id;
    int r;
};
bool cmp(node a, node b)
{
    if(a.r != b.r)
        return a.r < b.r;
    else a.id < b.id;
}
vector<node> ans;
vector<int> g[N];
int n, m, in[N];
void toposort(void)
{
    queue<node> q;
    for(int i = 1; i <= n; i++)
        if(in[i] == 0)
        {
            q.push({i, 0}), ans.push_back({i, 0});
            break;
        }
    while(q.size())
    {
        node temp = q.front();
        q.pop();
        for(int i : g[temp.id])
            if(--in[i] == 0)
            {
                q.push({i, temp.r + 1}), ans.push_back({i, temp.r + 1});
                break;
            }
    }
}
int main()
{
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int f, l; cin >> f >> l;
        g[f].push_back(l);
        in[l]++;
    }
    toposort();
    sort(ans.begin(), ans.end(), cmp);
    for(node a : ans)
        cout << a.id << ' ';
    return 0;
}