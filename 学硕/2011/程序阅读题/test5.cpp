#include <iostream>
#include <fstream>

using namespace std;

/**
 * 
 * key: Initially,x=10
 *      During call to f1,x=1
 *      During call to f1,x=2
 *      At the end,x=10
 * 
 */

void f1()
{
    static int x = 0;
    x++;
    cout << "During call to f1,x=" << x << endl;
};

int main()
{
    int x = 10;
    cout << "Initially,x=" << x << endl;
    f1();
    f1();
    cout << "At the end,x=" << x << endl;
    system("pause");
    return 0;
}
