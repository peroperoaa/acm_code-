#include <bits/stdc++.h>
using namespace std;
class Vector
{
private:
    int vec[5];
public:
    Vector(int v[])
    {
        for(int i = 0; i < 5; i++)
            vec[i] = v[i];
    }
    Vector() { }
    Vector(const Vector& obj)
    {
        for(int i = 0; i < 5; i++)
            vec[i] = obj.vec[i];
    }
    Vector operator +(const Vector& obj);
    Vector operator -(const Vector& obj);
    void print()
    {
        for(int i = 0; i < 5; i++)
            cout << vec[i] << ' ';
    }
};
Vector Vector::operator +(const Vector& obj)
{
    Vector tmp;
    for(int i = 0; i < 5; i++)
    {
        tmp.vec[i] = vec[i] + obj.vec[i];
    }
    return tmp;
}
Vector Vector::operator -(const Vector& obj)
{
    Vector tmp;
    for(int i = 0; i < 5; i++)
    {
        tmp.vec[i] = vec[i] - obj.vec[i];
    }
    return tmp;
}
int main()
{
    int tmp[5];
    for(int i = 0; i < 5; i++)
        cin >> tmp[i];
    Vector v1(tmp);
    for(int i = 0; i < 5; i++)
        cin >> tmp[i];
    Vector v2(tmp);
    (v1 + v2).print();
    cout << endl;
    (v1 - v2).print();
    return 0;
}