#include <iostream>
#include <fstream>

using namespace std;
/**
 *
 *  1 2 3 4 10
    2 3 4 5 10
    3 4 5 6 10
    4 5 6 7 10
 * 
 */

int main()
{
    int x = 10;
    int a[4][4] = {{1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6}, {4, 5, 6, 7}}, i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            cout << a[i][j] << " ";
        cout << x << endl;
    }

    system("pause");
    return 0;
}
