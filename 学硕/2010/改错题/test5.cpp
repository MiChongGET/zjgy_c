#include <iostream>
#include <fstream>

using namespace std;

void print_a(int *c, int size)
{
    int i = 0;

    for (int i = 0; i < size; i++)
    {
        printf("c[%d]=%d\n", i, c[i]);
    }
}

int main()
{
    int a[3] = {1, 2, 3};
    //算出数组的大小
    int size = sizeof(a) / sizeof(int);
    print_a(a, size);
    system("pause");
    return 0;
}
