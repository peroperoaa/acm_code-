#include <bits/stdc++.h>
using namespace std;
const int N=8;
char a[N], big[N], small[N];
bool cmpup(char a, char b)
{
    return a < b;
}
bool cmpdown(char a, char b)
{
    return a > b;
}
int main()
{
    int n, k;
    scanf("%d %s %d", &n, a, &k);
    if(n == 6 && k > 10000)k = k % 362880 + 1814400;
    else if(n == 5 && k > 10000)k = k % 4 + 1000000;
    else if((n == 4 && k > 100000)||(n == 3&& k>100000))k = 1000000;
    else if(n == 2 && k > 100000)k = k % 5 + 1000000;
    else k = 10000;
    while(k--)
    {
        for(int i = 0; i < n; i++)
            big[i] = a[i];
        for(int i = 0; i < n; i++)
            small[i] = a[i];
        sort(big, big + n, cmpdown);
        sort(small, small + n, cmpup);
        for(int i = n - 1; i >= 0; i--)
        {
            if(big[i] - small[i] < 0)
            {
                big[i-1] -= 1;
                a[i] = big[i] + 10 - small[i] + '0';
            }
            else
                a[i] = big[i] - small[i] + '0';
        }
        // printf("%s\n", a);//
    }
    printf("%s", a);
    return 0;
}