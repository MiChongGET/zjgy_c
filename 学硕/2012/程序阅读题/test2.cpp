#include <iostream>
#include <fstream>

using namespace std;
/**
 * 
 * 答案：5 11 19
 * 
 */

int main()
{

    int a[] = {2, 4, 6, 8, 10};
    int y = 1, x, *p;
    p = &a[1];

    //试卷上面没有大括号，所以试卷答案为19
    for (x = 0; x < 3; x++)
    {
        y += *(p + x);
        cout << y << endl;
    }

    system("pause");
    return 0;
}
