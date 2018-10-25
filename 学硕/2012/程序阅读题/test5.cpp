#include <iostream>
#include <fstream>

using namespace std;

/**
 * 
 * 答案：
 *  Construct:x=5,y=7
    Construct:x=1,y=3
    exiting...
    Destruct:x=1,y=3
    Destruct:x=5,y=7    
 * 
 */

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
    cout << "Construct:x=" << x << ",y=" << y << "\n";
}
Class::~Class()
{
    cout << "Destruct:x=" << x << ",y=" << y << "\n";
}

int main()
{
    //仅传递一个参数的时候，y即为默认值7
    Class a(5);
    Class b = Class(1, 3);
    cout << "exiting...\n";
    system("pause");
    return 0;
}
