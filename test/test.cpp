#include <bits/stdc++.h>
using namespace std;
void solve(void)
{
    double n; cin >> n;
    if(n >= 85) cout << 'A' << endl;
    else if(n >= 75) cout << 'B' << endl;
    else if(n >= 65) cout << 'C' << endl;
    else if(n >= 60) cout << 'D' << endl;
    else cout << 'F' << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
int * rtr(void)
{
    int * p = new int [10];

    //

    
    return p;
}