#include <iostream>
#include <fstream>

using namespace std;

int y = 10;
class EC
{
    int x;
    static int y;

  public:
    EC(int a)
    {
        x = a;
    }
    EC(float a)
    {
        y += a;
    }
    void show()
    {
        cout << ::y << ',' << y << '\n';
    }
};
int EC ::y = 100;

int main()
{

    EC e1(10);
    e1.show();
    EC e2(10.0f);
    e2.show();
    EC e3(20.5f);
    e3.show();

    system("pause");
    return 0;
}
