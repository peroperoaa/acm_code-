#include <bits/stdc++.h>
using namespace std;
vector<int> v((int)2e5 + 10);
void solve(void)
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        if(i % 2 == 0)
            cin >> v[i];
        else
        {
            int temp;cin >> temp;
            v[i] = -temp;
        }
    
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; 
    cin >> t;
    int b;
    while(t--)
        solve();
    return 0;
}
