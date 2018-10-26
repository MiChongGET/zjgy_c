#include <iostream>
#include <fstream>

using namespace std;

/**
 * keys:
 * orange
 * Unknown
 * 
 */

class CExpect
{
};
class CExpectApple : public CExpect
{
}; //������Ķ���
class CExpectOrange : public CExpect, public CExpectApple
{
};

int main()
{

    try //�쳣�������
    {
        char str[] = "Orange or Apple";
        char newStr[10];
        char *p = str;
        for (; p - str <= 6; p++)
            newStr[p - str] = *p;

        newStr[p - str] = 0;
        cout << newStr << endl;
        switch (*(p - 1)) //ѡ�����
        {
        case 'y':
            throw CExpectApple();
        case 'g':
            throw CExpectOrange();
        default:
            throw CExpect();
        }
    }
    catch (CExpectApple)
    {
        cout << "Apple";
    }
    catch (CExpectOrange)
    {
        cout << "Orange";
    }
    catch (CExpect)
    {
        cout << "Unknown";
    }

    system("pause");
    return 0;
}
