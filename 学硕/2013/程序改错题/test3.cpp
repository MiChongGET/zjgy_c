#include <iostream>
#include <fstream>

using namespace std;

class root
{
    int i;

  public:
    root(int I) : i(I) {}
    virtual int getI(void) { return i; }
    virtual int shiftI(int x) {}
};

class branch : public root
{
  public:
    branch(int I) : root(I) {}
    int getI(void) { return root::getI() * 10; }
    virtual int shiftI(int x) { return root::getI() << x; }
};

int main()
{
    root *Root[] = {new root(10), new branch(10)};
    cout << "Root[0]->getI()" << Root[0]->getI() << endl;
    cout << "Root[1]->getI()" << Root[1]->getI() << endl;
    cout << "Root[1]->shiftI()" << Root[1]->shiftI(3) << endl;

    system("pause");
    return 0;
}
