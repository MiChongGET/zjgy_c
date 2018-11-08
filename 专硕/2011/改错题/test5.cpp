#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a;
    int *p = &a;
    int b = 20;
    *p = b;
    cout << "a=" << a << endl;
    system("pause");
    return 0;
}
