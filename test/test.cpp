#include <bits/stdc++.h>
using namespace std;
const int N = 3e2 + 10;
const int M = 8e3 + 10;
    
int pre[N];
int root(int u){return pre[u] = (pre[u] == u ? u : root(pre[u]));}
void merge(int u, int v){pre[root(u)] = root(v);}
bool isCon(int u, int v){return root(u) == root(v);}
int main()
{

    return 0;
}