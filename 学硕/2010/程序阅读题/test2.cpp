#include <iostream>
#include <fstream>

using namespace std;
//全局变量
int i = 0;
int x = 0;
class Sample
{
  public:
    Sample()
    {
        cout << "Sample()" << endl;
    };
    Sample(int a)
    {
        cout << "Sample(int a)" << endl;
        x = a;
    }
    Sample(Sample &a)
    {
        i++;
        cout << "i++=" << i << endl;
    }
    void disp()
    {
        cout << ++i << endl;
    }
};

void fun(Sample &s1, Sample &s2)
{
    s1.disp();
    s2.disp();
    return;
}
Sample fun(Sample s)
{
    s.disp();
    return s;
}

int main()
{

    Sample s1(2), s2 = s1;
    fun(s1,s2);
    s1.disp();
    s2.disp();

    system("pause");
    return 0;
}
