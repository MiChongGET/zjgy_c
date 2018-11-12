#include <iostream>
#include <fstream>

using namespace std;

class Box
{
  public:
    Box(int, int);
    void print(Box &b);

  private:
    static const int height = 10;
    int width;
    int length;
};

Box::Box(int w, int len)
{
    width = w;
    length = len;
}

void Box::print(Box &box)
{
    cout << Box::height << endl;
    cout << box.length << endl;
    cout << box.width << endl;
}

int main()
{

    Box b(15, 20);
    b.print(b);
    system("pause");
    return 0;
}
