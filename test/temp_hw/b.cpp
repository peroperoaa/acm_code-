#include <bits/stdc++.h>
<<<<<<< HEAD
#define int long long 
using namespace std;
signed main()
{
    int l ,r; cin >> l >> r;
    cout << r / 4 - (l - 1) / 4 + (r + 1) / 2 - l / 2;
=======
using namespace std;
// 定义Fraction类
class Fraction
{
private:
    int fz, fm;
    int commonDivisor() 
    {
        return 0;
    } // 计算最大公约数
    void contracted() { } // 分数化简
public:
    Fraction(int a = 0, int b = 1);
    Fraction(const Fraction& p);
    Fraction operator+(Fraction p);
    Fraction operator-(Fraction p);
    Fraction operator*(Fraction p);
    Fraction operator/(Fraction p);
    void set(int = 0, int = 1);
    void display();
};
Fraction::Fraction(int a, int b)
{
    fz = a, fm = b;
}
Fraction::Fraction(const Fraction& p)
{
    fz = p.fz;
    fm = p.fm;
}
Fraction Fraction::operator+(Fraction p)
{
    Fraction tmp;
    tmp.fm = fm * p.fm;
    tmp.fz = fz * p.fm + p.fz * fm;
    return tmp;
}
Fraction Fraction::operator-(Fraction p)
{
    Fraction tmp;
    tmp.fm = fm * p.fm;
    tmp.fz = fz * p.fm - p.fz * fm;
    return tmp;
}
Fraction Fraction::operator*(Fraction p)
{
    Fraction tmp;
    tmp.fz = this->fz * p.fz;
    tmp.fm = this->fm * p.fm;
    return tmp;
}
Fraction Fraction::operator/(Fraction p)
{
    Fraction tmp;
    tmp.fz = this->fz * p.fm;
    tmp.fm = this->fm * p.fz;
    return tmp;
}
void Fraction::set(int x, int y)
{
    fz = x, fm = y;
}
void Fraction::display()
{
    cout << "fraction=" << fz << '/' << fm << endl;
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    Fraction t1(a, b), t2(c, d);
    (t1 + t2).display();
    (t1 - t2).display();
    (t1 * t2).display();
    (t1 / t2).display();
>>>>>>> 15b829c26b031cb0452888c17946be6f75ca3863
    return 0;
}