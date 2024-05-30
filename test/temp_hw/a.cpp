#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    float real, image;
public:
    Complex(float x = 0, float y = 0);
    friend Complex operator+(Complex&, Complex&);
    friend Complex operator-(Complex&, Complex&);
    friend Complex operator*(Complex&, Complex&);
    void show();
};
Complex::Complex(float x, float y) : real(x), image(y) { }
Complex operator+(Complex& p, Complex& q)
{
    Complex tmp(p.real + q.real, p.image + q.image);
    return tmp;
}
Complex operator-(Complex& p, Complex& q)
{
    Complex tmp(p.real - q.real, p.image - q.image);
    return tmp;
}
Complex operator*(Complex& p, Complex& q)
{
    Complex tmp(p.real * q.real - p.image * q.image, p.real * q.image + p.image * q.real);
    return tmp;
}
void Complex::show()
{
    cout << "Real=" << real <<" Image=" << image << '\n';
}
int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    Complex c1(a, b), c2(c, d);
    (c1 + c2).show();
    (c1 - c2).show();
    (c1 * c2).show();
    return 0;
}