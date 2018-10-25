#include <iostream>
#include <fstream>

using namespace std;

/**
 * 
 * �𰸣�constructor1
 *      constructor1
 *      constructor1
 *      4 4
 *      constructor2
 *      8 8
 * 
 */

class Sample
{
  public:
    int i, j;
    Sample(int a = 0, int b = 0)
    {
        i = a;
        j = b;
        cout << "constructor1" << endl;
    }
    Sample(const Sample &H)
    {
        i = H.i;
        j = H.j;
        cout << "constructor2" << endl;
    }

    //ע����飬�����һ���µ���������
    void plus(Sample H)
    {
        i += H.i;
        j += H.j;
    }

    void display()
    {
        cout << i << " " << j << endl;
    }
};

int main()
{
    Sample s1(3, 3), s2(4, 4), s3(5, 5);
    s2.display();
    s1.plus(s3);
    s1.display();

    system("pause");
    return 0;
}
