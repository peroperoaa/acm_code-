#include <bits/stdc++.h>
using namespace std;
class AbstractCPU
{
public:
    virtual void caculate() = 0;
};
class  AbstractGPU
{
public:
    virtual void display() = 0;
};
class AbstractMem
{
public:
    virtual void input() = 0;
};
class IntelCPU : public AbstractCPU
{
public:
    virtual void caculate() override
    {
        cout << "IntelCPU starting caculating.\n";
    }
};
class AmdCPU : public AbstractCPU
{
public:
    virtual void caculate() override
    {
        cout << "AmdCPU starting caculating.\n";
    }
};
class NvidiaGPU : public AbstractGPU
{
public:
    virtual void display() override
    {
        cout << "NvidiaGPU starting displaying.\n";
    }
};
class AmdGPU : public AbstractGPU
{
public:
    virtual void display() override
    {
        cout << "AmdGPU starting displaying.\n";
    }
};
class IntelMem : public AbstractMem
{
public:
    virtual void input() override
    {
        cout << "IntelMem starting inputing.\n";
    }
};
class Computer
{
    friend Computer operator+(const Computer& a, const Computer& b);
    friend istream& operator>>(istream& a, Computer& computer);
    AbstractCPU* cpu = NULL;
    AbstractGPU* gpu = NULL;
    AbstractMem* mem = NULL;
public:
    Computer() {}
    Computer(AbstractCPU* a, AbstractGPU* b, AbstractMem* c) : cpu(a), gpu(b), mem(c) { }
    void run()
    {
        cpu->caculate();
        gpu->display();
        mem->input();
    }
    ~Computer()
    {
        if(cpu != NULL)
            delete cpu;
        if(gpu != NULL)
            delete gpu;
        if(mem != NULL)
            delete mem;
    }
};
Computer operator+(const Computer& a, const Computer& b)
{  
    Computer temp;
    temp.cpu = a.cpu, temp.gpu = b.gpu, temp.mem = a.mem;
    return temp;
}
istream& operator>>(istream& a, Computer& computer)
{
        string aa;
        AbstractCPU* ta;
        AbstractGPU* tb;
        AbstractMem* tc;
        cout << "A for Amd and I for Intel\nPress your answer:"; 
        while(cin >> aa)
        {
            if(aa == "I")
            {
                ta = new IntelCPU; 
                break;
            }
            else if(aa == "A")
            {
                ta = new AmdCPU;
                break;
            }
            else
            cout << "You give a wrong answer.\nA for Amd and I for answerd\nPress your answer:"; 
        }
        cout << "A for Amd and N for Nvidia\nPress your answer:"; 
        while(cin >> aa)
        {
            if(aa == "N")
            {
                tb = new NvidiaGPU; 
                break;
            }
            else if(aa == "A")
            {
                tb = new AmdGPU;
                break;
            }
            else
            cout << "You give a wrong answer.\nA for Amd and N for Nvidia\nPress your answer:"; 
        }
        tc = new IntelMem;
        computer.cpu = ta;
        computer.gpu = tb;
        computer.mem = tc;
        return a;
}
ostream& operator<<(ostream& a, Computer& computer)
{
    computer.run();
    return a;
}
void test01()
{
    Computer computer(new IntelCPU, new NvidiaGPU, new IntelMem);
    Computer computer2(new AmdCPU, new AmdGPU, new IntelMem);
    cout << computer << computer2 << endl;
}
void test02()
{
    Computer a;
    cin >> a;
    cout << a;
}
int main()
{
    test02();
    return 0;
}
