#include <iostream>
#include <fstream>

using namespace std;

/**
 * 
 * ´ð°¸£ºB::f() const
        B::f(bool)
        B::f() const
        B::f(bool)
        D::f() const
        D::f(float)
 * 
 */

class B
{
  public:
    void f() const { cout << "B::f() const\n"; }
    virtual void g(bool) { cout << "B::f(bool)\n"; }
};

class D : public B
{
    public:
    virtual void f() const { cout << "D::f() const\n"; }
    virtual void g(float) { cout << "D::f(float)\n"; }
};

int main()
{

    B* p = new B;
    p->f();
    p->g(0);
    delete p;
    p = new D;
    p->f();
    p->g(0);
    delete p;
    D* d = new D;
    d->f();
    d->g(0);
    delete d;
    system("pause");
    return 0;
}
