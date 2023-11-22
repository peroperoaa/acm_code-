#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sort(a, a + i + 1);
        cout << a[i / 2] << '\n';
    }
    return 0;
}