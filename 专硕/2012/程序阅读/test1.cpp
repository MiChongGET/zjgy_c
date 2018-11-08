#include <iostream>
#include <fstream>

using namespace std;

int a[8]{1, 2, 3, 4, 5, 6, 7};
void fun(int *p, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        *(p + 7) += *(p + i);
    }
}

int main()
{
    int m = 8;
    fun(a, m);
    cout << a[7] << endl;

    system("pause");
    return 0;
}
