#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char str[81], *ptr;
    int i;

    for (i = 0; i < 80; i++)
    {
        str[i] = getchar();
        if(str[i] == '\n') break;
    }

    str[i] = '\n';
    ptr = str;
    while (*ptr)
        putchar(*(ptr++)); //指针变量++表示指针位置移位，可以看成是数组下标变化

    system("pause");
    return 0;
}
