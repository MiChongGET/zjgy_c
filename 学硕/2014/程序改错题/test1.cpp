#include <iostream>
#include <fstream>

using namespace std;
void f(int n, int k)
{
    char c;
    int m;
    m = n % k;
    n = n / k;
    c = n > 1 ? '0' + m : 'a' + n;
    if (n - 1)
        f(n, k);
    cout << c;
}

int main()
{
    f(6, 2);

    system("pause");
    return 0;
}
