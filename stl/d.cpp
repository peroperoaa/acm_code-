#include <bits/stdc++.h>
using namespace std;
map<string, vector<int> > mp;
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        for(int j = 0; j < t; j++)
        {
            string temp;
            cin >> temp;
            if(mp[temp].size() == 0 || mp[temp][mp[temp].size() - 1] != i)
                mp[temp].push_back(i);
        }
    }
    int qus;
    cin >> qus;
    while(qus--)
    {
        string temp;
        cin >> temp;
        if(mp.count(temp))
        {
            cout << mp[temp][0];
            for(int i = 1; i < mp[temp].size(); i++)
                cout << ' ' << mp[temp][i];
        }
        cout << '\n';
    }
    return 0;
}