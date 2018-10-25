#include <iostream>
#include <fstream>

using namespace std;

class f
{
  private:
    int x = 0, y = 0;

  public:
      void f1(int a, int b)
    {
        x = a;
        y = b;
    }
    void get()
    {
        cout << x << y << endl;
    }
};

int main()
{

    f a;
    a.f1(1, 3);
    a.get();
    system("pause");
    return 0;
}
