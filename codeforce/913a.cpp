#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    int _;
    cin >> _;
    while(_--)
    {
        string s;
        cin >> s;
        for(char c = 'a'; c <= 'h'; c++)
            if(s[0] != c)
                cout << c << s[1] << endl;
        for(int i = 1; i <= 8; i++)
            if(s[1] - '0' != i)
                cout << s[0] << i << endl;
    }
    return 0;
}