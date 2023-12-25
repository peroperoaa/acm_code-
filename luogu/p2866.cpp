#include <bits/stdc++.h>
using namespace std;
void solve(void)
{
    long long sum = 0;
    vector<int> v, stk((int)8e4 + 10);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int temp;cin >> temp;
        v.push_back(temp);
    }
    reverse(v.begin(), v.end());
    stk[0] = v[0];
    int top = 0;
    for(int i = 1; i < n; i++)
    {
        if(v[i] <= stk[top])
            top = 0;
        sum += top;
        cout << sum << endl;
        stk[++top] = v[i];
    }
    cout << sum;
}
int main()
{
    int _ = 1;
    while(_--)
        solve();
    return 0;
}