#include <iostream>
#include <fstream>

using namespace std;

class Counter
{
    int v;

  public:
    Counter() { v = 0; }
    Counter &preAddOne()
    {
        v++;
        return *this;
    }
    Counter postAddOne()
    {
        Counter temp;
        temp.v = v++;
        return temp;
    }
    void print() { cout << v << endl; }
};

int main()
{
    Counter c;
    
    for(int i = 0; i < 3; i++)
    {
        c.postAddOne().postAddOne();
    }
    c.print(); //3

    
    for(int i = 0; i < 2; i++)
    {
        c.preAddOne().preAddOne();
    }

    c.print(); //7
    
    

    system("pause");
    return 0;
}
