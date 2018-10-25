#include <iostream>
#include <fstream>

using namespace std;

/**
 * 注意：先构造父类，再构造成员变量、最后构造自己
?*      先析构自己，在析构成员变量、最后析构父类
 * 答案是：A B A
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

    //先创建的对象后析构，所以a在b之前析构
    B b;
    A a = b;
    system("pause");
    return 0;
}
