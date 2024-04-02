#include <iostream>
#include <iomanip>
#include <algorithm>
#define int long long
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
    CFraction ans(fz * r.fm + fm * r.fz, fm * r.fm);
    return ans;
}
CFraction CFraction::sub(const CFraction &r)
{
    CFraction ans(fz * r.fm - fm * r.fz, fm * r.fm);
    return ans;
}
CFraction CFraction::mul(const CFraction &r)
{
    CFraction ans(fz * r.fz, fm * r.fm);
    return ans;
}
CFraction CFraction::div(const CFraction &r)
{
    CFraction ans(fz * r.fm, fm * r.fz);
    return ans;
}
int CFraction::getGCD()
{
    if(!fz) return 1;
    int a = max(abs(fz), abs(fm)), b = min(abs(fm), abs(fz));
    // cout << a << ' ' << b << endl;
    while(a % b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return b;
}
void CFraction::print()
{   
    int ss = getGCD();
    cout << fz / ss << '/' << fm / ss << '\n';
}
void solve()
{
    int fz1, fm1, fz2, fm2;
    char ch;
    cin >> fz1 >> ch >> fm1 >> fz2 >> ch >> fm2;
    CFraction a(fz1, fm1);
    // a.print();
    CFraction b(fz2, fm2);
    // b.print();
    a.add(b).print();
    a.sub(b).print();
    a.mul(b).print();
    a.div(b).print();
    cout << '\n';

}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}