#include <iostream>
#include <fstream>

using namespace std;
class A
{
  public:
    A(int x = 0, int y = 0) : a(x), b(y) {}

    void show()
    {
        cout << a << " " << b << endl;
    }

  private:
    int a, b;
};

int main()
{

    A obj(18);
    obj.show();
    system("pause");
    return 0;
}
