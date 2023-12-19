#include <bits/stdc++.h>
#define int long long
using namespace std;
int ans;
struct val{
    int num;
    int prc;
};
map<string, val> mp;
string temp[110];
string menu[110];
signed main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> temp[i];
    for(int i = 0; i < m; i++)
        cin >> menu[i];
    int sp; cin >> sp;
    for(int i = 0; i < m; i++)
        cin >> mp[menu[i]].prc;
    for(int i = 0; i < n; i++)
        if(mp.count(temp[i]))
        mp[temp[i]].num++;
    else
        ans += sp;
    for(int i = 0; i < n; i++)
        if(mp.count(temp[i]))
        {
            ans += mp[temp[i]].num * mp[temp[i]].prc;
            mp[temp[i]].num = 0;
        }
    cout << ans;
    return 0;
}