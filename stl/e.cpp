#include <bits/stdc++.h>
using namespace std;
stack<int> stka, stkb;
void solve(void)
{
    int op, w;
    cin >> op;
    if(op == 0)
    {
        cin >> w;
        if(stkb.empty())
            stka.push(w), stkb.push(w);
        else
            stka.push(w), stkb.push(max(w, stkb.top()));
    }
    if(op == 1 && !stka.empty())
        stka.pop(), stkb.pop();
    if(op == 2 && !stkb.empty())
        cout << stkb.top() << '\n';
    if(op == 2 && stkb.empty())
        cout << 0 << '\n';
}    
int main()
{
    int _;
    cin >> _;
    while(_--)
        solve();
    return 0;
}