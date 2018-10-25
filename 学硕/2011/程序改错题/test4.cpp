#include <iostream>
#include <fstream>

using namespace std;

class CComplex
{
    double m_real;
    double m_image;

  public:
    ~CComplex() {}
    void SetValue(double r = 0, double i = 0)
    {
        m_real = r;
        m_image = i;
    }

    double getreal()
    {
        return m_real;
    }

    double getimage()
    {
        return this->m_image;
    }

    void show()
    {
        cout << m_real << "+" << m_image << "*i" << endl;
    }
};

int main()
{
    CComplex c1;
    c1.SetValue(2.5, 7.5);
    cout << c1.getreal() << endl;

    system("pause");
    return 0;
}
