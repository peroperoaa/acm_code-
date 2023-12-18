// #include <bits/stdc++.h>
// #define int long long
// #define endl '\n'
// #define sp ' '
// using namespace std;
// vector <int> a;
// int ans;
// signed main()
// {
//     int n; cin >> n;
//     while(cin >> n)
//         a.push_back(n);
//     sort(a.begin(), a.end());
//     int num = a.size();
//     for(int i = 0; i < num - 2; i++)
//     {
//         int temp;
//         temp = a[0] + a[1];
//         a.erase(a.begin(), a.begin() + 2);
//         if(temp >= a[a.size() - 1])
//                 a.push_back(temp);
//         else 
//             for(int j = 0; j < a.size(); j++)
//             {
//                 if(temp <= a[j])
                
//                 {
//                     a.insert(a.begin() + j, temp);
//                     break;
//                 }
//             }
//         ans += temp;
//     }
//     ans += a[0] + a[1];
//     cout << ans;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
priority_queue <int, vector<int> , greater<int> > pq;
int sum;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        pq.push(temp);
    }
    while(pq.size() > 1)
    {
        int temp = pq.top();
        pq.pop();
        temp += pq.top();
        pq.pop();
        sum += temp;
        pq.push(temp);
    }
    cout << sum;
}