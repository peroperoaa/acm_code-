#include <bits/stdc++.h>
using namespace std;
string s;
vector<char> ans;
int main()
{
    int n; cin >> n;
    cin >> s;
    int pt = 0;
    int cnt = 0; 
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != '(' && s[i] != ')')
            ans.push_back(s[i]);
        else if(s[i] == '(')
        {
            ++cnt;
            ans.push_back(s[i]);
        }
        else if(s[i] == ')')
        {
            if(cnt)
            {
                while(ans[ans.size() - 1] != '(')
                    ans.pop_back();
                ans.pop_back();
                --cnt;
            }
            else
                ans.push_back(')');
        }
    }
    for(char i: ans)
        if(i)
            cout << i;
    return 0;
}