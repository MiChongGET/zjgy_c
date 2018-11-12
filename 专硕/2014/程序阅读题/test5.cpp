#include <iostream>
#include <fstream>

using namespace std;

class base
{
    int n;

  public:
    base(){};
    base(int a) { cout << "father base(int a), a= " << a << endl; }
    ~base() { cout << "father ~base()"; }
};

class subs : public base
{
    int m;

  public:
    subs(int a, int b) : base(a)
    {
        cout << "son subs(int a,int b) ,b = " << b << endl;
    }
};

int main()
{

    subs(1, 2);
    system("pause");
    return 0;
}
