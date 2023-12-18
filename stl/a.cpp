#include <bits/stdc++.h>
#define sp ' '
#define endl '\n'
using namespace std;
vector <int> a;
int main()
{
    int n; cin >> n;
    while(cin >> n)
        a.push_back(n);
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    cout << a.size() << endl;
    for(int i: a)
        cout << i << sp;
    return 0;
}