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
        putchar(*(ptr++)); //ָ�����++��ʾָ��λ����λ�����Կ����������±�仯

    system("pause");
    return 0;
}
