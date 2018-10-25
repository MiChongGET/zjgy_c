#include <iostream>
#include <fstream>

using namespace std;

class f
{
  private:
    double x, y;

  public:
    void f1(double a, double b)
    {
        x = a;
        y = b;
    }
    double max()
    {
        return (x > y) ? x : y;
    }

    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
};

int main()
{
    f a;
    a.f1(1.5, 3.8);
    cout << a.getX() << "****" << a.getY() << "****" << a.max() << endl;

    system("pause");
    return 0;
}
