#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int i, k, a[10], p[3];
    k = 5;
    for (i = 0; i < 10; i++)
        a[i] = i;
    for (i = 0; i < 3; i++)
        p[i] = a[i * (i + 1)]; //p0=a0;p1=a2;p2=a6
    for (i = 0; i < 3; i++)
        k += p[i] * 2; //5,9,21
    cout << k;
    
    system("pause");
    return 0;
}
