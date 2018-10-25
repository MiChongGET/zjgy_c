#include <iostream>
#include <fstream>

using namespace std;

class Sample
{
    int i;
    double d;

  public:
    void setdata(int n) { i = n; }
    void setdata(double x) { d = x; }
    void disp()
    {
        cout << i << endl;
        cout << d << endl;
    }
};

int main()
{

    Sample s;
    s.setdata(10);
    s.setdata(15.6);
    s.disp();
    system("pause");
    return 0;
}
