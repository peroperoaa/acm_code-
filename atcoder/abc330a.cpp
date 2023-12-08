#include <bits/stdc++.h>
using namespace std;
const int N = 2e3 + 10;
string s[N];
int tl[N];
long long ans;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> s[i];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(s[i][j] == 'o')
                ++tl[i];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(s[i][j] == 'o')
                for(int k = i + 1; k < n; k++)
                    if(s[k][j] == 'o')
                        ans += tl[i] + tl[k] - 2;
    cout << ans;
    return 0;
}