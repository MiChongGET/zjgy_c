#include <iostream>
#include <fstream>

using namespace std;

int f(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return f(n - 1) + f(n - 2);
    }
}
int main()
{
    int i, a[5];

    for (i = 0; i < 5; i++)
    {
        a[i] = f(i);
        cout << a[i] << endl;
    }

    system("pause");
    return 0;
}
