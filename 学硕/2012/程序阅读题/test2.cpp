#include <iostream>
#include <fstream>

using namespace std;
/**
 * 
 * �𰸣�5 11 19
 * 
 */

int main()
{

    int a[] = {2, 4, 6, 8, 10};
    int y = 1, x, *p;
    p = &a[1];

    //�Ծ�����û�д����ţ������Ծ��Ϊ19
    for (x = 0; x < 3; x++)
    {
        y += *(p + x);
        cout << y << endl;
    }

    system("pause");
    return 0;
}
