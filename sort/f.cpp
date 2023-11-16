#include <iostream>
#include <algorithm>
const int N=1e3+10;
int a[N],dtl[N];
int main()
{
    int jdg=1;
    int n;std::cin>>n;
    for(int i=0;i<n;i++)
        std::cin>>a[i];
    for(int i=0;i<n-1;i++)
        dtl[i]=abs(a[i]-a[i+1]);


    // for(int i=0;i<n-1;i++)
    // {
    //     std::cout<<a[i]<<' ';
    // }
    // std::cout<<'\n';


    std::sort(dtl,dtl+n);


    // for(int i=0;i<n-1;i++)
    // {
    //     std::cout<<dtl[i]<<' ';
    // }
    // std::cout<<'\n';


    for(int i=0;i<n-2;i++)
    {
        if(dtl[i]!=dtl[i+1]&&(dtl[i+1]-1)!=dtl[i])
        {
            // printf("%d %d##\n",dtl[i],dtl[i+1]);
            jdg=0;
            break;
        }
    }
    if(jdg)
        std::cout<<"Jolly";
    else
    std::cout<<"Not jolly";
    return 0;
}