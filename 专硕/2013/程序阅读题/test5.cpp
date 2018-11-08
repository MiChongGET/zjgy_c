#include <iostream>
#include <fstream>

using namespace std;

class A
{
    int num;

  public:
    A()
    {
        num = 0;
        cout << "aaa" << endl;
    }
    A(int n)
    {
        num = n;
        cout << "bbb,num=" << num << endl;
    }
    ~A() { cout << "ccc,num=" << num << endl; }
};

int main()
{

    A a, *p;
    p = new A(2);
    a = *p;
    delete p;
    cout << "ddd" << endl;
    // system("pause");
    return 0;
}
