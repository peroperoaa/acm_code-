#include <bits/stdc++.h>#include <iostream>
#include <set>
#include <map>
using namespace std;

map<string,set<int>>m;
string s;
int main(){
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++){
        int k;
        cin >> k;
        for(int j = 1;j <= k;j++){
            cin >> s;
            m[s].insert(i);
        }
    }
    int mm;
    cin >> mm;
    string s1;
    for(int i = 1;i <= mm;i++){
        cin >> s1;
        if(m[s1].empty()){
            for(set<int>::iterator it = m[s1].begin();it != m[s1].end();it++){
                cout << *it << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}
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
    cout << dfs(0, k, 0, 0);
    return 0;
}