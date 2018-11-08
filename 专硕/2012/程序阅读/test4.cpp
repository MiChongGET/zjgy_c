#include <iostream>
#include <fstream>

using namespace std;

class A
{
  public:
    A() {}
    A(const A &)
    {
        cout << "A::A(const A &)" << endl;
    }
    A &operator=(const A &)
    {
        cout << "A::operator=" << endl;
        return *this;
    }
};

int main()
{

    A a;
    A b = a;
    b = b;
    system("pause");
    return 0;
}
