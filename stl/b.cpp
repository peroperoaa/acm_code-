#include <bits/stdc++.h>
#define sp ' '
#define endl '\n'
using namespace std;
stack <char> ops;
bool flag = false;
int main()
{
    string s;
    cin >> s;
    for(char ch: s)
    {
        if(ch == '(')
            ops.push(ch);
        else if(ch == ')')
            if(ops.empty())
                flag = true;
            else
                ops.pop();
    }
    if(ops.empty() && flag == false)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}