#include <bits/stdc++.h>
using namespace std;
class MyMatrix
{
    friend MyMatrix operator * (const MyMatrix& p, const MyMatrix& q);
    int** data;
public:
    int n;
    MyMatrix& operator =(const MyMatrix& p)
    {
        n = p.n;
        // cout << "构造函数调用n = " << n << endl;
        data = new int* [n];
        for(int i = 0; i < n; i++)
            data[i] = new int [n];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                data[i][j] = p.data[i][j];  
        return *this;
    }
    // MyMatrix(const MyMatrix& p)
    // {
    //     n = p.n;
    //     cout << "构造函数调用n = " << n << endl;
    //     data = new int* [n];
    //     for(int i = 0; i < n; i++)
    //         data[i] = new int [n];
    //     for(int i = 0; i < n; i++)
    //         for(int j = 0; j < n; j++)
    //             data[i][j] = p.data[i][j];
    // }
    MyMatrix()
    {
        data = NULL;
        n = 0;
    }
    void print()
    {
        for(int i = 0; i < n; i++)
        {
            // cout << "print's n = " << n << endl;
            cout << data[i][0];
            for(int j = 1; j < n; j++)
                cout << ' ' << data[i][j];
            if(i + 1 != n)
                cout << endl;
        }
    }
    ~MyMatrix()
    {
        for(int i = 0; i < n; i++)
            delete data[i];
        delete data;
        data = NULL;
    }
    void set(int n)
    {
        this->n = n;
        data = new int* [n];
        for(int i = 0; i < n; i++)
            data[i] = new int [n];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                data[i][j] = 0;
    }
    void input()
    {
        // cout << "input's n = " << n << endl;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                    cin >> data[i][j];
    }
};
MyMatrix operator * (const MyMatrix& p, const MyMatrix& q)
{
    int n = p.n;
    MyMatrix tmp;
    tmp.set(n);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            for(int k = 0; k < n; k++)
                tmp.data[i][j] += p.data[i][k] * q.data[k][j];
    return tmp;
}

int main()
{
    int c, n; cin >> c >> n;
    MyMatrix m, tmp;
    tmp.set(n), m.set(n);
    tmp.input();
    for(int i = 0; i < c - 1; i++)
    {
        m.input();
        // cout << "here\n";
        tmp = tmp * m;
    }
    tmp.print();
    return 0;
}