#include <bits/stdc++.h>
#define int long long 
const int N = 1e5 + 10;
using namespace std;
struct SegmentTree{
    int l, r, val, lazy;
    #define l(x) t[x].l
    #define r(x) t[x].r
    #define val(x) t[x].val
    #define lazy(x) t[x].lazy
}t[4 * N];
void build (int l, int r, int p)
{
    l(p) = l, r(p)= r;
    if(l == r) {cin >> val(p); return ;}
    int mid = r + ((l - r) >> 1);
    build(l, mid, p << 1);
    build(mid + 1, r, (p << 1) | 1);
    val(p) = val(p << 1) + val((p << 1) | 1);
    return ; 
}
void change (int x, int y, int v, int p)
{
    if(x <= l(p) && y >= r(p))
    {
        val(p) += (r(p) - l(p) + 1) * v;
        lazy(p) += v;
        return ;
    }
    int mid = r(p) + ((l(p) - r(p)) >> 1);
    if(lazy(p) && l(p) != r(p))
    {
        val(p << 1) += (mid -l(p) + 1) * lazy(p), lazy(p << 1) += lazy(p);//note +=
        val((p << 1) | 1) += (r(p) - mid) * lazy(p), lazy((p << 1) | 1) += lazy(p);// - mid shouldn't + 1
        lazy(p) = 0;
    }
    if(x <= mid) change(x, y, v, p << 1);
    if(y > mid) change(x, y, v, (p << 1) | 1);
    val(p) = val(p << 1) + t[(p << 1) | 1].val;
    return ;
}
int getsum (int x, int y, int p)
{
    int sum = 0;
    if(x <= l(p) && y >= r(p)) return val(p);
    int mid = r(p) + ((l(p) - r(p)) >> 1);
    if(lazy(p) && l(p) != r(p))
    {
        val(p << 1) += (mid -l(p) + 1) * lazy(p), lazy(p << 1) += lazy(p);
        val((p << 1) | 1) += (r(p) - mid) * lazy(p), lazy((p << 1) | 1) += lazy(p);
        lazy(p) = 0;
    }
    if(x <= mid) sum = getsum(x, y, p << 1);
    if(y > mid) sum += getsum(x, y, (p << 1) | 1);
    return sum;
}
signed main ()
{
    int n, m; cin >> n >> m;
    build(1, n, 1);
    while(m--)
    {
        int op; cin >> op;
        if(op == 1)
        {
            int x, y, k; cin >> x >> y >> k;
            change(x, y, k, 1);
        }
        else
        {
            int x, y; cin >> x >> y;
            cout << getsum(x, y, 1) << '\n';
        }
    }
    return 0;
}