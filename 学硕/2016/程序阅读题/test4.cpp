#include <iostream>
#include <fstream>

using namespace std;
int i = 0;
int f(int m)
{
    static int j = 0;
    int s = 0;

    for (; i < m; i++)
    {
        s += j++;
    }

    return s;
}
int main()
{
    int x = f(3);
    int y = f(5);
    cout << x << "," << y;
    system("pause");
    return 0;
}
