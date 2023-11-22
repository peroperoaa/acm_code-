#include <bits/stdc++.h>
const int N = 5e5 + 10;
int a[N], prefix[N], cnt;
int main()
{
    int n, m; std::cin >> n >> m;
    for(int i = 1; i <= n; i++)std::cin >> a[i];
    for(int i = 1; i <= n; i++)a[i] %= m;
    for(int i = 1; i < n; i++)prefix[i] = prefix[i - 1] + a[i];
    for(int i = 1; i < n; i++)
        for(int j = i + 1; j <= n; j++)
        {
            if((prefix[j] - prefix[i]) % m == 0)
                cnt++;
        }
    std::cout << cnt;
    return 0;
}