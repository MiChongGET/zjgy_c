#include <iostream>
#include <fstream>

using namespace std;

class A
{
    int i, j;

  public:
    void get();
    int getI() { return i; }
    int getJ() { return j; };
};

class B : public A
{
    int k;

  public:
    void make();
};

void B::make()
{
    k = A::getI() * A::getJ();
}

int main()
{

    system("pause");
    return 0;
}
