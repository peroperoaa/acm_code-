#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
vector<int> g[N];
int in[N];

int n;//the number of V

bool toposort(void)
{
    vector<int> L;
    queue<int> S;
    for(int i = 0; i < n; i++)
        if(in[i] == 0) S.push(i);
    while(S.size())
    {
        int temp = S.front();
        S.pop();
        L.push_back(temp);
        for(auto i : g[temp])
            if(--in[i] == 0) 
                S.push(i);
    }
    if(L.size() == 0)
    {
        for(int i : L) cout << i << ' ';
        cout << '\n';
        return true;
    }
    return false;
}
int main()
{
    //input
    return 0;
}
for(auto i : a)
{
           
}
