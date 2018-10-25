#include <iostream>
#include <fstream>

using namespace std;
/**
 * key:222333
 */
class Sample
{
  public:
    Sample() { cout << (x = 2) << endl; }
    Sample(int i, int j)
    {
        cout << (x = i + j) << endl;
    }
    ~Sample() { cout << ++x<<endl; }

  private:
    int x;
};
int main()
{
    //创建了三个Sample对象，p1指向3个对象，所以初始化三次，析构三次
    Sample *p1 = new Sample[3];

    delete[] p1;

    system("pause");
    return 0;
}