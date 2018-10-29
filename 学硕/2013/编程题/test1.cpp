#include <iostream>
#include <fstream>

using namespace std;

class CCalc
{
  private:
    double dou;

  public:
    CCalc(double num) : dou(num){};

    double a(double num)
    {
        //强转一下，防止死循环
        if (int(num) == 1 || int(num) == 0)
        {
            return num;
        }
        else
        {
            return num * a(num - 1);
        }
    }

    double fun1()
    {
        return a(dou);
    }

    double fun2()
    {
        double sum = 0;
        for (double i = 1; i <= dou; i++)
        {
            sum += (2.0 * i - 1) / a(i);
        }
        return sum;
    }
};

int main()
{

    CCalc cc(6);
    cout << cc.fun1() << endl;
    cout << cc.fun2() << endl;

    system("pause");
    return 0;
}
