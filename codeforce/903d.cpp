#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int a[N];
void solve(void)
{
    int n;
    cin >> n;
    int temp = n;
    while(temp--)
    {
        int temp1;
        cin >> temp1;
        for(int i = 2; i * i <= temp1; i++)
        {
            int res = temp1 / i;
            if(res * i == temp1)
                a[res]++, a[i]++;
        }
    }
    int flag = 1;
    for(int i = 2; i <= 1e4; i++)
    {
        if(a[i] != n && a[i] != 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
    memset(a,0,sizeof(a));
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0);
    int _;
    cin >> _;
    while(_--)
        solve();
    return 0;
}