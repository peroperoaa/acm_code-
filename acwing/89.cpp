#include <bits/stdc++.h>
int main()
{
    int a, b, p;
    std::cin >> a >> b >> p;
    int temp = 1;
    int ans = 1;
    ans = 1 % p;
    for(; b; b >>= 1)
    {
        if(b & 1)ans = (long long)ans * a % p;
        a = (long long)a * a % p;
    }
    std::cout << ans;
}