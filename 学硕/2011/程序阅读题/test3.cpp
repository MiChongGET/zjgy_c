#include <iostream>
#include <fstream>

using namespace std;

/**
 * ע�⣺�ȹ��츸�࣬�ٹ����Ա������������Լ�
?*      �������Լ�����������Ա�����������������
 * ���ǣ�A B A
 * 
 */
class A
{
  public:
    A() {}
    virtual void f() { cout << "A" << endl; }
    ~A() { f(); }
};

class B : public A
{
  public:
    B() {}
    void f() { cout << "B" << endl; }
    ~B() { f(); }
};

int main()
{

    //�ȴ����Ķ��������������a��b֮ǰ����
    B b;
    A a = b;
    system("pause");
    return 0;
}
