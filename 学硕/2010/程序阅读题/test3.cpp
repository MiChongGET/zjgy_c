#include <iostream>
#include <fstream>

using namespace std;

/**
 *
 * 这道题注意的是，在我们捕获异常的时候，如果父类异常类在前面那么首先父类异常捕获
 * 所以我们一般把父类放在后面，子类异常放在前面！
 *  
 */
class CMyExcept
{
    void writeout() { cout << "XXX\n"; }
};

class CExcept0 : public CMyExcept
{
  public:
    void writeout() { cout << "AAA\n"; }
};
class CExcept1 : public CExcept0
{
  public:
    void writeout() { cout << "BBB\n"; }                           
};
class CExcept2 : public CExcept1
{
  public:
    void writeout() { cout << "CCC\n"; }
};

int main()
{

    char ch;

    try
    {
        cin >> ch;

        switch (ch)
        {
        case '0':
            throw CExcept0();
        case '1':
            throw CExcept1();
        case '2':
            throw CExcept2();
        }
    }
    catch (CExcept0 e)
    {
        cout << 'A' << endl;
        CExcept0 a;
        // a.writeout();
        e.writeout();
    }
    catch (CExcept1 e)
    {
        cout << 'B' << endl;
        CExcept1 b;
        b.writeout();
    }
    catch (CExcept2 e)
    {
        cout << 'C' << endl;
        CExcept2 c;
        c.writeout();
    }

    system("pause");
    return 0;
}
