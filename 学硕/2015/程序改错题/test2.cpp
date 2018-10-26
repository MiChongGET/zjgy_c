#include <iostream>
#include <fstream>

using namespace std;

class point
{
  public:
    point(int a)
    {
        x = a;
        cout << x << endl;
    }
    point(point &p)
    {
        x = p.x;              
        cout << x << endl;
    }
    void setx(int a)
    {
        x = a;
    }

  private:
    int x;
};

int main()
{
    point p1(1), p2(p1);
    p2.setx(2);
    point *           p3 = &p2;

    system("pause");
    return 0;
}
