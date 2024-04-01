#include <bits/stdc++.h>
using namespace std;
int a[10], b[10];
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
    int _ = 1;
    // cin >> _;
    while(_--) solve();
    return 0;
}