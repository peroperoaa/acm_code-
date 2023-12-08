#include <bits/stdc++.h>
#define endl '\n'
#define sp ' '
using namespace std;
const int N = 1e3 + 10;
int idx[N];
long long plca[N][3], plcb[N][3];
int main()
{
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= k; i++)
        cin >> idx[i];
    sort(idx + 1, idx + k + 1);
    int p = 1, q = 1;
    for(int i = 1; i <= n; i++)
        if(i == idx[p])
        {
            cin >> plca[p][1] >> plca[p][2];
            p++;
        }
        else
        {
            cin >> plcb[q][1] >> plcb[q][2];
            q++;
        }
    double ans = 0;
    for(int i = 1; i <= n - k; i++)
    {
        double MinS = 1e6;
        for(int j = 1; j <= k; j++)
            MinS = min(MinS, sqrt((plca[j][1] - plcb[i][1]) * (plca[j][1] - plcb[i][1]) + (plca[j][2] - plcb[i][2]) * (plca[j][2] - plcb[i][2])));
        ans = max(ans, MinS);
    }
    printf("%.10f", ans);
    return 0;
}