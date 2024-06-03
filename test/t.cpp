#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
	double real; // 实部
	double imag; // 虚部
public:
	Complex();
	Complex(double r, double i);
	// 友元函数，复数c1 + c2(二参数对象相加)
	friend Complex addCom(const Complex& c1, const Complex& c2);
	// 友元函数，输出类对象c的有关数据(c为参数对象)
	friend void outCom(const Complex& c);
    friend Complex minusCom(const Complex &c1, const Complex &c2);
};
Complex::Complex()
{
    real = 0;
    imag = 0;
}
Complex::Complex(double r, double i)
{  
    real = r;
    imag = i;
}
Complex addCom(const Complex &c1, const Complex &c2)
{   
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2. imag;
    return temp;
}
 void outCom(const Complex& c)
 {
    cout << "(" << c.real << "," << c.imag << ")" << '\n';
    return ;
 }
 Complex minusCom(const Complex &c1, const Complex &c2)
 {
    Complex temp;
    temp.real = c1.real - c2.real;
    temp.imag = c1.imag - c2. imag;
    return temp;
 }
int main()
{
    double a, b; cin >> a >> b;
    Complex com(a, b);
    int n; cin >> n;
    while(n--)
    {
        char ch; cin >> ch;
        if(ch == '+')
        {
            double c, d; 
            cin >> c >> d;
            Complex tt(c, d);
            com = addCom(com, tt);
            outCom(com);
        }
        else
        {
            double c, d; 
            cin >> c >> d;
            Complex tt(c, d);
            com = minusCom(com, tt);
            outCom(com);
        }
    }
    return 0;
}