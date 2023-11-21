//ans(num,status)
#include <bits/stdc++.h>
char a, b, c;
int n;
typedef long long ll;
void turn(int x, char a, char b)
{
        printf("%d:%c->%c\n", x, a, b);
}
void ans(int nh, bool flag)
{
    if(nh == 1)
    {
        if(flag)
            turn(1, b, a);
        else 
            turn(1,a,b);
    }
    else if(flag)
    {
        ans(nh - 1, !flag);
        turn(nh,b,c);
    }
    else
    {
        ans(nh - 1, !flag);
        turn(nh,a,c);
    }
    a:;
}
int main()
{
    std::cin >> n >> a >> b >> c;
    ans(n, false);
    return 0;
}