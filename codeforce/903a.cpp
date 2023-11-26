#include <bits/stdc++.h>
using namespace std;
int main()
{
    int _; cin >> _;
    while(_--)
    {
        int n, m; cin >> n >> m;
        string x, s; cin >> x >> s;
        int cnt = 0;
        while(x.size() < 25 && x.find(s) == -1)
        {
            cnt++;
            x += x;
        }
        if(x.size() >= 25 && x.find(s) == -1)
            cout << -1 << "\n";
        else if(cnt == 0)
            cout << 0 << "\n";
        else
            cout << cnt << "\n";
    }
    return 0;
}