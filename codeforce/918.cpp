#include <bits/stdc++.h>
using namespace std;
char a[3][3];
void solve(void)
{
    int n;cin >> n;
    long long sum = 0;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        sum += temp;
    }
    int sq = sqrt(sum);
    if(sq * sq  == sum)
        cout << "YES\n";
    else    
        cout << "NO\n";
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}