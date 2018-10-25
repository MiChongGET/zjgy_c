#include <iostream>
#include <fstream>

using namespace std;
class Class
{
    int x, y;

  public:
    Class(int n = 6, int m = 7);
    ~Class();
    void Set(int n, int m) { x = n, y = m; }
};

Class::Class(int n, int m)
{
    Set(n, m);
    cout << "Construct:x=" << x << ",y=" << y << endl;
}
Class::~Class()
{
    cout << "Des:x=" << x << ",y=" << y << endl;
}

int main()
{

    Class a(5);
    Class b = Class(1,3); 
    system("pause");
    return 0;
}
