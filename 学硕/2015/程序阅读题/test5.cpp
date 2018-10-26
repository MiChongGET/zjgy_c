#include <iostream>
#include <fstream>

using namespace std;

/**
 * 
 * keys:
 *  BClass()
    BClass()
    SClass()
    SClass::Show()
    2,3 
    ~SClass()
    ~Base()
    ~Base()
 * 
 */
class BClass
{
  public:
    BClass(int a)
    {
        cout << "BClass()" << endl;
        n = a;
    }
    virtual void Show()
    {
        cout << "BClass::Show()" << endl;
        cout << n << endl;
    }
    ~BClass()
    {
        cout << "~Base()" << endl;
    }

  protected:
    int n;
};
class SClass : public BClass
{
    BClass base;
    int m;

  public:
    SClass(int a, int b, int c) : BClass(a), base(b)
    {
        cout << "SClass()" << endl;
        n = b;
        m = c;
    }
    void Show()
    {
        cout << "SClass::Show()" << endl;
        cout << n << "," << m << endl;
    }

    ~SClass()
    {
        cout << "~SClass()" << endl;
    }
};

int main()
{

    SClass s(1, 2, 3);
    BClass *p = &s;

    p->Show();
    system("pause");
    return 0;
}
