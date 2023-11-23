#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, p;
    cin >> a >> b >> p;
    long long ans = 0, temp=1;
    while(b)
    {
        if(b & 1)ans = (ans + a * temp) % p;
        a = a * 2 % p;
        b >>= 1;
    }
    cout << ans % p;
    return 0;
}