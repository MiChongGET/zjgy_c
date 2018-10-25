#include <iostream>
#include <fstream>

using namespace std;

class Sample
{
    int x;

  public:
    Sample() { x = 0; }
    Sample(int a) { cout << (x = a); }
    ~Sample() { cout << ++x; }
    void disp() { cout << x; }
};

int main()
{   
    Sample s1(2);
    s1.disp();
    s1.~Sample();

    system("pause");
    return 0;
}
