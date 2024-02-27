#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int main()
{
    int n; 
    while(cin >> n && n != 0)
    {
        int p = 0;
        map<string, int> mp;
        vector<int> g[N];
        for(int i = 0; i < n; i++)
        {
            string w, l; cin >> w >> l;
            if(!mp.count(w)) mp[w] = p++;
            if(!mp.count(l)) mp[l] = p++;
             g[mp[l]].push_back(mp[w]);
        }
        int cnt = 0;
        for(int i = 0; i < p; i++)
            if(g[i].size() == 0) cnt++;
        if(cnt == 1) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}