#include <iostream>
#include <fstream>

using namespace std;

void f1()
{
    static int x = 0;
    x++;
    cout << "During call to f1,x=" << x << endl;
}

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
