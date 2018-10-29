#include <iostream>
#include <fstream>

using namespace std;

class Rectangle
{
  public:
    Rectangle(int heigh, int width)
    {
        this->heigh = heigh;
        this->width = width;
    }

    void area()
    {
        cout << (heigh * width);
    }

    bool operator>(Rectangle &new_rec);

  private:
    int heigh;
    int width;
};

bool Rectangle::operator>(Rectangle &new_rec)
{
    return ((heigh * width) > (new_rec.heigh * new_rec.width));
}

int main()
{

    Rectangle r1(5, 6), r2(4, 5);
    cout << "r1 中持=";
    r1.area();
    cout << endl;

    cout << "r2 中持=";
    r2.area();
    cout << endl;

    if (r1 > r2)
    {
        cout << "r1>r2" << endl;
    }
    else
    {
        cout << "r1<r2" << endl;
    }

    system("pause");
    return 0;
}
