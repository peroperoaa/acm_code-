#include <bits/stdc++.h>
#define sp ' '
#define endl '\n'
#define int long long 
using namespace std;
struct node{
    int price;
    int num;
    double per;
}a[3];
long long ans;
bool cmp(node a, node b)
{
    return a.per < b.per;
}
signed main()
{
    int n;
    cin >> n >> a[0].price >> a[1].price >> a[2].price;
    a[0].num = 6;
    a[1].num = 8;
    a[2].num = 12;
    a[0].per = a[0].price / 6;
    a[1].per = a[1].price / 8;
    a[2].per = a[2].price / 12;
    sort(a, a + 3, cmp);
    ans += n / 24 * a[0].price * (24 / a[0].num);
    n %= 24;
    
}