#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 10;
vector<int> g[N];
int in[N], n;
void toposort(void)
{
    vector<int> L;
    queue<int> S;
    for(int i = 1; i <= n; i++)
        if(in[i] == 0) S.push(i);
    while(S.size())
    {
        int temp = S.front();
        S.pop();
        L.push_back(temp);
        for(int i : g[temp])
            if(--in[i] == 0) 
                S.push(i);
        
    }
    for(int i : L) cout << i << ' ';
}
void input(void)
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int temp;
        while(cin >> temp && temp)
        {
            g[i].push_back(temp);
            in[temp]++;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    input();
    toposort();
}


#define int long long