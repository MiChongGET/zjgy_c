#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    double x = 10.5;
    char *y = "hello world";
    cout << x * 2 << endl; //21
    cout << (int)x << " " << (short)x << endl; //10 10
    cout << y[4 + 3] << endl; //o

    system("pause");
    return 0;
}
