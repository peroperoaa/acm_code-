#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 10;
struct node{
    int a, b;
    bool c = false;
}box[N];
bool cmp1(node a, node b)
{
    if(a.c == 0 && b.c == 0)
        return a.a > b.a;
    else if(a.c == 0 && b.c != 0)
        return false;
    else if(a.c != 0 && b.c == 0) 
        return true;
    else
        return a.b > b.b;
}
bool cmp2(node a, node b)
{
    return a.a > b.a;
}
int ans;
signed main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr),cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        box[i].c = b > a;
        box[i].a = a;
        box[i].b = b;
    }
    sort(box, box + n, cmp1);
    sort(box + k, box +n, cmp2);
    for(int i = 0; i < k; i++)
        ans += box[i].b;
    for(int i = k; i < n; i++)
        ans += box[i].a;
    cout << ans;
   return 0;
}