#include <iostream>
#include <fstream>

using namespace std;

/**
 *
 * �����ע����ǣ������ǲ����쳣��ʱ����������쳣����ǰ����ô���ȸ����쳣����
 * ��������һ��Ѹ�����ں��棬�����쳣����ǰ�棡
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
