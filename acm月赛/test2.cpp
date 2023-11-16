#include<bits/stdc++.h>
using namespace std;
int judge(int num,int wei)
{
    int cun=num,cnt;
    while(num)
    {
        num/=10;
        cnt++;
    }
    if(wei==0)
    wei=cnt;
        for(int i=cnt;i>wei;i--)
        {
            cun/=10;
        }
        return cun%10;
}
int main()
{
    int N;cin>>N;
    while(N--)
    {
        int test;
        cin>>test;
        if(test<=9)
        {
            cout<<test<<' ';
            continue;
        }
        else if(test<=189)
        {
            test-=9;
            int num;
            if(test%2!=0)
                num=test/2+1;
            else
                num=test/2;
                int wei=test%2;
                cout<<judge(num+9,wei)<<' ';
                continue;
        }
        else if(test<=2889)
        {
            test-=189;
            int num;
            if(test%3!=0)
                num=test/3+1;
            else
                num=test/3;
                int wei=test%3;
                cout<<judge(num+99,wei)<<' ';
                continue;
        }
        else if(test<=38889)
        {
            test-=2889;
            int num;
            if(test%4!=0)
                num=test/4+1;
            else
                num=test/4;
                int wei=test%4;
                cout<<judge(num+999,wei)<<' ';
                continue;
        }
        else
        {
            test-=38889;
            int num;
            if(test%5!=0)
                num=test/5+1;
            else
                num=test/5;
                int wei=test%5;
                cout<<judge(num+9999,wei)<<' ';
                continue;
        }
        return 0; 

    }
}