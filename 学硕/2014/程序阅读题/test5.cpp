#include <iostream>
#include <fstream>

using namespace std;

/**
 * 
 * 1 2 3 4
   0 1 5 6
   0 0 1 8
  * 
 */

void process(int a[][4], int n, int m)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            *(*(a + i) + j) /= *(*(a + i) + i);
        }
    }
}

int main()
{

    int a[][4] = {1, 2, 3, 4, 3, 4, 5, 6, 5, 6, 7, 8};
    process(a, 3, 4);

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }

    system("pause");
    return 0;
}
