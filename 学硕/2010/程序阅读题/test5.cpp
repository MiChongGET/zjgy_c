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
    //����������Sample����p1ָ��3���������Գ�ʼ�����Σ���������
    Sample *p1 = new Sample[3];

    delete[] p1;

    system("pause");
    return 0;
}