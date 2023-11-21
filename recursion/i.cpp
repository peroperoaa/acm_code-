//ans(num,status)
#include <bits/stdc++.h>
char a, b, c;
int n,cnt;
typedef long long ll;
void turn(int x, char a, char b)
{
        printf("%d:%c->%c\n", x, a, b);
        // printf("%d\n",++cnt);
}
void ans(int nh, bool flag, bool Main, bool judge)
{
    if(nh == 2)
    {
        if(flag && !Main)
        {
            turn(1,b,c);
            turn(2,b,a);
            turn(1,c,a);
            
        }
        else if(!flag && !Main)
        {
            turn(1,a,c);
            turn(2,a,b);
            turn(1,c,b);
        }
        else if(flag && Main)
        {
            turn(1,b,a);
            turn(2,b,c);
            turn(1,a,c);
        }
        else
        {
            turn(1,a,b);
            turn(2,a,c);
            turn(1,b,c);
        }
    }
    else if(flag)
    {
        ans(nh - 1, flag, false, false);
        turn(nh,b,c);
        if(judge)ans(nh - 1, !flag, true, false);
        else ans(nh - 1, !flag, false, false);
    }
    else
    {
        ans(nh - 1, flag, false, false);
        turn(nh,a,c);
        if(judge)ans(nh - 1, !flag, true, false);
        else ans(nh - 1, !flag, false, false);
    }
}
int main()
{
    std::cin >> n >> a >> b >> c;
    ans(n, false,true,1);
    return 0;
}