#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<int> v, stk(1000010);

signed main()
{
    int n, top = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for(int i = n - 1; i >=  0; i--)
    {
        while(top && v[i] > stk[top])
            top--;
        stk[++top] = v[i];
    }
    cout << stk[1] - stk[top];
    return 0;
}