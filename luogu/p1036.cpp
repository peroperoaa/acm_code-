#include <bits/stdc++.h>
using namespace std;
const int N = 30;
vector<int> v;
int n, k;
bool isprime(int n)
{
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}
int dfs(int idx, int t, int sum, int res)
{
    if(t == 0)
        return isprime(sum);
    if(n - idx - t < 0)
        return false;
    res += dfs(idx + 1, t, sum, 0) + dfs(idx + 1, t - 1, sum + v[idx], 0);
    return res;
}
int main()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    v.erase(unique(v.begin(), v.end()), v.end());
    cout << dfs(0, k, 0, 0);
    return 0;
}