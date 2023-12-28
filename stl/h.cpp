#include <bits/stdc++.h>
using namespace std;
set<int> mp[200020];
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n, q;
    cin >> n >> q;
    for(int i = 1; i <= n; i++)
    {
        int temp;cin >> temp;
        mp[i].insert(temp);
    }
    while(q--) 
    {
        int a, b;
        cin >> a >> b;
        if(mp[a].size() > mp[b].size())
            mp[b].swap(mp[a]);
        for(int it: mp[a])
            mp[b].insert(it);
        mp[a].clear();
        cout << mp[b].size() << '\n';
    }
    return 0;
}