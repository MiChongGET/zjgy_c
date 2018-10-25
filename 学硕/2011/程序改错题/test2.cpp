#include <iostream>
#include <fstream>

using namespace std;

class A
{
  public:
    void fun() { cout << "a.fun" << endl; }
};

class B
{
  public:
    void fun() { cout << "b.fun" << endl; }
    //������ͬ���ķ���������Ҫ����virtual
    virtual void gun() { cout << "b.gun" << endl; }
};

class C : public A, public B
{
  private:
    int b;

  public:
    void gun() { cout << "c.gun" << endl; }
    //ָ��fun������A�Ļ���B��
    void hun() { A::fun(); }
};

int main()
{
    C cc;
    cc.gun();
    cc.A::fun();

    system("pause");
    return 0;
}
