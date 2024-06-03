<<<<<<< HEAD
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

class MyMatrix {
private:
	int n;
	int** data;
public:
	MyMatrix(int n1, int** d = NULL);
	~MyMatrix();
	MyMatrix operator * (MyMatrix& m);
	MyMatrix& operator = (const MyMatrix& m);
	void print();
};

MyMatrix::MyMatrix(int n1, int** d) : n(n1) {
	data = new int* [n];

	for (int i = 0; i < n; i++) {
		data[i] = new int[n];
	}
	if(d != NULL)
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				data[i][j] = d[i][j];
			}
		}
}


MyMatrix MyMatrix::operator * (MyMatrix& m) {
	
	MyMatrix pm(n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
                pm.data[i][j] = 0;
			for (int k = 0; k < n; k++) {
				pm.data[i][j] += m.data[k][j] * data[i][k];
			}
		}
	}
	return pm;
}

MyMatrix& MyMatrix::operator = (const MyMatrix& m) {
	n = m.n;
	data = new int*[n];
	for (int i = 0; i < n; i++) {
		data[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			data[i][j] = m.data[i][j];
		}
	}
	return *this;
}

void MyMatrix::print() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == n - 1) {
				cout << data[i][j];
				break;
			}
			cout << data[i][j] << ' ';
		}
		cout << endl;
	}
}

MyMatrix::~MyMatrix() {

	for (int i = 0; i < n; i++) {
		delete[] data[i];
	}
	delete[] data;
}

int main() {
	int t;

	cin >> t;

	int n;

	cin >> n;

	int** a = new int* [n];

	for (int i = 0; i < n; i++) {
		a[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	MyMatrix m1(n, a);

	t--;

	while (t--) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		MyMatrix pm(n, a);
        m1 = m1 * pm;
	}
	m1.print();

	for (int i = 0; i < n; i++) {
		delete[] a[i];
	}
	delete[] a;

	return 0;
=======
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
>>>>>>> 15b829c26b031cb0452888c17946be6f75ca3863
}