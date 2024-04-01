#include <bits/stdc++.h>
#define int long long 
using namespace std;
const int N = 5e5 + 10;
struct SegmentTree{
    int l, r;
    int val;
}t[4 * N];
void build (int l, int r, int p)
{
    t[p].l = l, t[p].r = r;
    if(l == r)
    {
        cin >> t[p].val;
        return ;
    }
    int mid = r +((l - r) >> 1);
    build(l, mid, 2 * p);
    build(mid + 1, r, 2 * p + 1);
    t[p].val = t[2 * p].val + t[2 * p + 1].val;
    return ;
}
void change (int i, int c, int p)
{
    if(t[p].l == t[p].r) 
    {
        t[p].val += c;
        return ;
    }
    int mid = t[p].r + ((t[p].l - t[p].r) >> 1);
    if(i <= mid) change(i, c, 2 * p);
    else change(i, c, 2 * p + 1);
    t[p].val += c;
    return ;
}
int ask (int l, int r, int p)
{
    if(l <= t[p].l && r >= t[p].r) 
        return t[p].val;
    int sum = 0;
    int mid = t[p].r + ((t[p].l - t[p].r) >> 1);
    if(l <= mid) sum += ask(l, r, 2 * p);
    if(r > mid) sum += ask(l, r, 2 * p + 1);
    return sum;
}
signed main()
{
    int n, ti; cin >> n >> ti;
    build(1, n, 1);
    while(ti--)
    {
        int op; cin >> op;
        if(op == 1)
         {
            int x, y; cin >> x >> y;
            change(x, y, 1);
         }
         else
         {
            int x, y; cin >> x >> y;
            cout << ask(x, y, 1) << '\n';
         }
    }
    return 0;
}