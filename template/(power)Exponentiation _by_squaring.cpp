#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
long long power(long long a, long long b)
{
    long long res = 1;
    for(; b; b >>= 1, a *= a)
        if(b & 1)res *= a;
    return res;
}
long long modpower(long long a, long long b)
{
    long long res = 1;
    for(; b; b >>= 1, a = a * a % mod)
        if(b & 1) res = res * a % mod;
    return res;
}
int main()
{
    int n, k; cin >> n >> k;
    cout << power(n, k);
    cout << endl;
    cout << modpower(n, k);
    return 0;
}