#include <bits/stdc++.h>
using namespace std;
 
struct stct{
    int sb = true;
};
 
int main()
{
    stct *lxh = new stct ({true});
    if(lxh -> sb) cout << "True\n";
    else cout << "False\n";
    return 0;
}
