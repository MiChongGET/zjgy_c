#include <iostream>
#include <fstream>

using namespace std;

class CGeo
{
    virtual double get_perimeter() = 0;
    virtual double get_area() = 0;
};

class rectangle : CGeo
{
};
class circle : CGeo
{
};
class square : CGeo
{
};

int main()
{

    system("pause");
    return 0;
}
