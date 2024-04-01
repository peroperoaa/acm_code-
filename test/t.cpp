#include <bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
int a[10], b[10];
=======
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
>>>>>>> 591dd2cd6ce195afc041c5d9cc55f1eeab842777
const int N = 10;
bool vis[N][N];
int n, h, w;
bool use[10];
bool flag = false;
int cnt = 0;
void dfs()
{
    bool flag1 = false;
    int x, y;
    for(int it = 1; it <= h; it++)
        for(int jt = 1; jt <= w; jt++)
            if(vis[it][jt] == false)
            {
                flag1 = true;
                x = it, y = jt;
                for(int i = 1; i <= n; i++)
                {
                    if(use[i] == true)
                        continue;

                    if(x + a[i] - 1 <= h && y + b[i] - 1 <= w)
                    {
                        for(int ii = x; ii < x + a[i]; ii++)
                            for(int jj = y; jj < y + b[i]; jj++)
                                if(vis[ii][jj] == true)
                                    goto a;
                        use[i]  = true;
                        for(int ii = x; ii < x + a[i]; ii++)
                            for(int jj = y; jj < y + b[i]; jj++)
                                vis[ii][jj] = true;
                        dfs();
                        for(int ii = x; ii < x + a[i]; ii++)
                            for(int jj = y; jj < y + b[i]; jj++)
                                vis[ii][jj] = false;
                    }
                    if(x + b[i] - 1 <= h && y + a[i] - 1 <= w)
                    {
                        for(int ii = x; ii < x + a[i]; ii++)
                            for(int jj = y; jj < y + b[i]; jj++)
                                if(vis[ii][jj] == true)
                                    goto a;
                        use[i]  = true;
                        for(int ii = x; ii < x + b[i]; ii++)
                            for(int jj = y; jj < y + a[i]; jj++)
                                vis[ii][jj] = true;
                        dfs();
                        for(int ii = x; ii < x + b[i]; ii++)
                            for(int jj = y; jj < y + a[i]; jj++)
                                vis[ii][jj] = false;
                    }
                    use[i] = false;
                }
                a:;
            }
    if(flag1 == false) flag = true;
    return ;
}
void solve(void)
{
    cin >> n >> h >> w;
    for(int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];
    dfs();
    if(flag) cout << "Yes";
    else cout << "No";
}
signed main()
{
<<<<<<< HEAD
    int _ = 1;
    // cin >> _;
    while(_--) solve();
    return 0;
=======
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
>>>>>>> 591dd2cd6ce195afc041c5d9cc55f1eeab842777
}