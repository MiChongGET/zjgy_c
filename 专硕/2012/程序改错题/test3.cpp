#include <iostream>
#include <fstream>

using namespace std;
void f(char p)
{
    p++;
    char *c = &p;
    c += 'A' - 'a';
}
int main()
{
    char str[] = "abcde";
    f(*str + 3);
    cout << str << endl;

    system("pause");
    return 0;
}
