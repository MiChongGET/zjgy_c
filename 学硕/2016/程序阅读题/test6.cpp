#include <iostream>
#include <fstream>

using namespace std;

/**
 * 
 * key:
 *      0
 *      0
 *      sum =20
 * 
 */

class B
{
  public:
    int i;
    B() { i = 0; }
    virtual int sum() { return i; }
    void print() { cout << i << endl; }
};

class D : public B
{
    int j;

  public:
    D(int x) { B::i = x, j = x; }
    int sum() { return B::sum() + j; }
};

void call(B *pb)
{
    cout << "sum=" << pb->sum() << endl;
}
int main()
{

    B *pb = new B();
    D *pd = new D(10);
    cout << pb->sum() << endl;
    pb->print();
    call(pd);
    delete pb;
    delete pd;

    system("pause");
    return 0;
}