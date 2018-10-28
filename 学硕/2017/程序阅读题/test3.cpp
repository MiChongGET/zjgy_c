#include <iostream>
#include <fstream>

using namespace std;

class B
{
  public:
    void f()
    {
        cout << "1" << endl;
    }
    ~B()
    {
        cout << "5" << endl;
    }
    virtual void g(float x)
    {
        cout << x << endl;
    }
};
class D : public B
{
  public:
    virtual void f()
    {
        cout << "3" << endl;
    }
    virtual void g(float y)
    {
        cout << y << " " << y << endl;
    }
};

int main()
{

    B *d = new D;
    d->f();
    d->g(200);
    delete d;

    system("pause");
    return 0;
}
