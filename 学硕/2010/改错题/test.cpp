#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x = 5, y = 6;
    int *p = &x;
    *p = y;
    cout << *p << endl;
    system("pause");
    return 0;
}
