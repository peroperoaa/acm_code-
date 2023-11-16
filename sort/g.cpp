#include <iostream>
const int N=1e2+10;
int a[N];
int main()
{
    int cnt=0;
    while(std::cin>>a[cnt++]);// i->number
    cnt--;//cntΪʲҪ--
    int time=1;
    for(int i=0;i<cnt;i++)
        for(int j=0;j<cnt-i-1;j++)
            {
                if(a[j+1]<a[j])
                {
                    int Swap;
                    Swap=a[j+1];
                    a[j+1]=a[j];
                    a[j]=Swap;
                    continue;
                }
            }
    for(int i=0;i<cnt;i++)
    {
        if(time)
        {
            std::cout<<a[i];
            time=0;
        }
        else
        std::cout<<' '<<a[i];
    }
    return 0;
}