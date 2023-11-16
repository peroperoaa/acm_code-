#include <bits/stdc++.h>
using namespace std;
int main() {
    string num;
    int ccl;
    cin>>num>>ccl;
    for (int i=0; i<ccl;i++)
    {
        int flag=0;
        for (int j=0;j<num.size()-1;j++)
        {
            if(num[j]>num[j+1]) 
            {
                num.erase(j,1);
                flag=1;
                break;
            }
        }
        if(!flag)
            num.erase(num.size()-1);
    }
    while (num[0]=='0') num.erase(0, 1);
    if (num.size()>=1)
        cout<<num;
    else
        cout<<"0";
    return 0;
}