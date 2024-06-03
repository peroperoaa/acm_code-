#include <iostream>
using namespace std;
template<typename sblyx>
void myswap(sblyx&a, sblyx&b)
{
    sblyx tmp = a;
    a = b, b = tmp;
}
int main()
{
    int a = 5, b = 10;
    myswap(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}