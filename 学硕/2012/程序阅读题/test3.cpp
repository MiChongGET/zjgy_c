#include <iostream>
#include <fstream>

using namespace std;

/**
 * 
 * ´ð°¸£º19
 * 
 */

int s = 10;
int func(int a)
{
    int c;
    c = a + s;
    return c;
}

int main()
{
    int x = 9, y = 9, t;
    t = func((x + y, x--, y++));
    cout << t << endl;
    system("pause");
    return 0;
}
