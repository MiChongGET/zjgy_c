#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << "A";
        }
        int a = i + 2;

        while (--a > 0)
        {
            cout << "B";
        }

        cout << endl;
    }

    system("pause");
    return 0;
}
