#include <iostream>
#include <fstream>

using namespace std;

/**
 *  key:
 *      2-2-2-2
        4-6-8-10
        12-12-12-12
 * 
 * 
 */
void process(int a[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            a[i][j] += *(*(a + i) + j);
}
int main()
{

    int a[][4] = {1, 1, 1, 1, 2, 3, 4, 5, 6, 6, 6, 6, 6};
    process(a, 3, 4);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j];
            if (j < 3)
                cout << "-";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
