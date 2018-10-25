#include <iostream>
#include <fstream>

using namespace std;
void fun(char *p)
{
    char t;
    if (*p != '\0')
    {
        t = *p++;
        fun(p);
        if (t != '\0')
            cout << t;  //fedcba
    }
}

int main()
{
    char *a = "abcdef";
    fun(a);

    system("pause");
    return 0;
}
