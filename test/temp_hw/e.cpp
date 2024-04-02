#include <iostream>
using namespace std;
class CStack
{
public:
    CStack();
    CStack(int s);
    int get(int index);
    void push(int n);
    int isEmpty();
    int isFull();
    int pop();
    ~CStack();
private:
    int *a;
    int size;
    int top;
};
CStack::CStack()
{
    a = new int [10];
    size = 10;
    top = 0;
    cout << "Constructor.\n";
}
CStack::CStack(int s)
{
    a = new int [s];
    size = s;
    top = 0;
    cout << "Constructor.\n";
}
int CStack::get(int index)
{
    return a[index];
}
void CStack::push(int n)
{
    a[top] = n;
    top += 1;
    return ;
}
int CStack::isEmpty()
{
    if(size) return 0;
    else return 1;
}
int CStack::isFull()
{
    if(size - top) return 1;
    else return 0;
}
int CStack::pop()
{
    top -= 1;
    return a[top];
}
CStack::~CStack()
{
    cout << "Destructor.\n";
}
void solve(void)
{
    int n; cin >> n;
    CStack st(n);
    for(int i = 0; i < n; i++)
    {
        int temp; cin >> temp;
        st.push(temp);
    }
    for(int i = 0; i < n; i++)
        cout << st.pop() << ' ';
    cout << '\n';
}
int main()
{
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}








