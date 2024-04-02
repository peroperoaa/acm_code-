#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

class CFraction{

public:
    CFraction() {};
    CFraction(int fz_val, int fm_val);
    CFraction add(const CFraction &r);
    CFraction sub(const CFraction &r);
    CFraction mul(const CFraction &r);
    CFraction div(const CFraction &r);
    int getGCD();   
    void print();

private:
    int fz, fm;
};

CFraction::CFraction(int fz_val, int fm_val): fz (fz_val), fm (fm_val) {}

CFraction CFraction::add(const CFraction &r) { 
    return CFraction(fz * r.fm + r.fz * fm, fm * r.fm);
};

CFraction CFraction::sub(const CFraction &r) { 
    return CFraction(fz * r.fm - r.fz * fm, fm * r.fm);
};

CFraction CFraction::mul(const CFraction &r) { 
    return CFraction(fz * r.fz, fm * r.fm);
};

CFraction CFraction::div(const CFraction &r) { 
    return CFraction(fz * r.fm, fm * r.fz);
};

int CFraction::getGCD(){
    int a = abs(fz), b = abs(fm);
    int temp;
    if(a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    int r = a % b;
    while(a % b) {
        r = a % b; 
        a = b;
        b = r;
    }
    return b;
};

void CFraction::print() {
    int GCD = getGCD();
    fz /= GCD;
    fm /= GCD;
    if (fz / fz == fm / fm) {
        cout << fz << "/" << fm << endl;
    }
    else {
        cout << "-" << fz << "/" << fm << endl;
    }
}

void solve() {
    int a1 = 0, b1 = 0, a2 = 0, b2 = 0;
    char c;
    cin >> a1 >> c >> b1 >> a2 >> c >> b2;
    CFraction p1(a1, b1);
    CFraction p2(a2, b2);
    CFraction p3;
    p3 = p1.add(p2);
    p3.print();
    p3 = p1.sub(p2);
    p3.print();
    p3 = p1.mul(p2);
    p3.print();
    p3 = p1.div(p2);
    p3.print();
    cout << endl;
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}