#include <bits/stdc++.h>
using namespace std;
const int N=5e4+10;
char s[N];
int cnt;
int a[N];
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr);
    int p = 0, n = 0;
    cin >> n >> s;
    for(int i = 0; i < n-4; i++)
    {
        if(s[i] < s[i+1] && s[i+1] > s[i+2] && s[i+2] < s[i+3] && s[i+3] > s[i+4])
        {
            cnt++;
            a[p++] = i + 3;
        }
    }
    if(cnt)
    {
        printf("%d\n", cnt);
        for(int i = 0;i < cnt; i++)
            printf(" %d"+ ! i, a[i]);
    }
    else printf("0");
    return 0;
}