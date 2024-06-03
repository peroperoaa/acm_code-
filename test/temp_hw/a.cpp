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
}