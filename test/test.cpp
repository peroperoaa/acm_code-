#include <bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
int main()
{
    int a = 10;
    int 
=======

class Cube
{
public:
    void set_l(int l)
    {
        m_l = l;
    }
    void set_h(int h)
    {
        m_h = h;
    }
    void set_w(int w)
    {
        m_w = w;
    }
    int get_l(void)
    {
        return m_l;
    }
    int get_h(void)
    {
        return m_h;
    }
    int get_w(void)
    {
        return m_w;
    }
    int caculateS(void)
    {
        return 2 * m_h * m_l + 2 * m_h * m_w + 2 * m_l * m_w;
    }
    int caculateV(void)
    {
        return m_h * m_l * m_w;
    }
private:
    int m_l;
    int m_h;
    int m_w;
};
int main()
{
    Cube c1, c2;
    c1.set_l(10);
    c1.set_h(10);
    c1.set_w(10);
    cout << "c1的面积是:" << c1.caculateS() << endl;
    cout << "c1的体积是:" << c1.caculateV() << endl;
    c2.set_l(10);
    c2.set_h(10);
    c2.set_w(10);
>>>>>>> 8ae01895a619af40f8fd044d64746407c716f89b
    return 0;
}