#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    for (int i = 1; i <= 6; ++i)
    {
        for (int k = 0; k < i; k += 2)
            cout << i;
        cout << endl;
    }

    system("pause");
    return 0;
}
