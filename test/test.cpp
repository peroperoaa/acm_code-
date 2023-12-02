#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string s, str, split;
    cin >> s >> split >> str;
    int pos = s.find(str);
    while(pos != string::npos)
    {
        for(int i = pos + 1; i < pos + 2 * str.size() - 1; i += 2)
            s.insert(i, split);
        pos = s.find(str);
    }
    cout << s;
    return 0;
}