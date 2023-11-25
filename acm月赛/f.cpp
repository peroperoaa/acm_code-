#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _;
    cin >> _;
    while(_--)
    {
       int ans = 0;
        cin >> ans;
        int a, b, c;
        cin >> a >> b >> c;
        if(a <= b && c > 0)
        {
            // for(int i = a; i < b; i += c)
            //     ans += i;
            int xs = (b - a - 1) / c;
            int ls = a + xs * c;
            ans += (a + ls)/ 2 * (xs + 1);
            cout << ans << '\n';
        }
        else if(a >= b && c < 0)
        {
            // for(int i = a; i > b; i += c)
            //     ans += i;
            int xs = (a - b -1) / (-c);
            int ls = a + xs * c;
            ans += (a + ls)/ 2 * (xs + 1);
            cout << ans << '\n';
        }
        else 
            cout << ans << '\n';
    }
    return 0;
}
//a= 213
// b= 4623564
// c= 1