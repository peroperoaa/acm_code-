#include <bits/stdc++.h>
using namespace std;
vector<int> v;
long long ans;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int temp = 0, num = 0;
    for(int i: v)
    {
        if(temp != i)
        {
            ans += num / 2;
            num = 1;
            temp = i;
        }
        else
            num++;
    }
    cout << ans + num / 2;
}
