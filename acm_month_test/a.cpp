#include <bits/stdc++.h>
using namespace std;
// vector<int> a;
const int N = 2e5 + 10;
int a[N];
long long cnt;
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n, m;
    cin >> n >> m;
    int temp;
    for(int i = 0; i < n; i++)
    {
        // cin >> temp;
        // a.push_back(temp);
        cin >> a[i];
    }
    //sort(a.begin(), a.end(), cmp);
     sort(a, a + n, cmp);
    // vector<int>::iterator it = a.begin() + m - 1;
    int *it = &a[m - 1];
    while(* it != 0)
    {
        int temp = *it;
        // for(vector<int>::iterator p = a.begin(); p != it + 1; p++)
        // {
        //     *p -= temp; 
        // }
        for(int p = 0; p <= m - 1; p++)
        {
            a[p] -= temp;
        }
        cnt += temp;
        // sort(a.begin(), a.end(), cmp);
        sort(a, a + n, cmp);
    }
    cout << cnt;
    return 0;
}