#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

/**
 * 
 * key:12
 *     -1
 *     1
 * 
 */

int fun(char *a)
{
    return strlen(a);
}
int fun(int b, int c)
{
    return b + c + 1;
}
int fun(bool b)
{
    return b ? 1 : -1;
}

int main()
{

    cout << fun(5, 6) << endl
         << fun(false) << endl
         << fun(5);

    system("pause");
    return 0;
}
