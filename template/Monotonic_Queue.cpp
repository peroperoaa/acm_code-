#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int a[N];
struct node{
    int id, val;
};
deque<node> q;
int main()
{
    int n, k; cin >> n >> k;
    for(int i = 0 ; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++)
    {
        while(q.size()) if(q.front().id <= i - k) q.pop_front();
        else break;
        while(q.size()) if(q.back().val >= a[i])q.pop_back();
        else break;
        q.push_back({i, a[i]});
        if(i >= k - 1) cout << q.front().val << ' ';
    }
    cout << '\n';
    q.clear();
    for(int i = 0; i < n; i++)
    {
        while(q.size()) if(q.front().id <= i - k) q.pop_front();
        else break;
        while(q.size()) if(q.back().val <= a[i])q.pop_back();
        else break;
        q.push_back({i, a[i]});
        if(i >= k - 1) cout << q.front().val << ' ';
    }
    return 0;
}
//luogu P1886 