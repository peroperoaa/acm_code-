#include <iostream>
#include <iomanip>
using namespace std;
class CFraction
{
    int fz,fm;
public:
    CFraction(int fz_val, int fm_val);
    CFraction add(const CFraction &r);
    CFraction sub(const CFraction &r);
    CFraction mul(const CFraction &r);
    CFraction div(const CFraction &r);
    int getGCD();
    void print();
};
CFraction::CFraction(int fz_val, int fm_val)
{
    fz = fz_val, fm = fm_val;
}
CFraction CFraction::add(const CFraction &r)
{
    
}




int getGCD



void solve()
{

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int _ = 1;
    while(_--) solve();
    return 0;
}