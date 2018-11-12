#include <iostream>
#include <fstream>

using namespace std;



struct Object
{
    int a;
    int b;
};

int main()
{
    Object &MyFunction(int b, int a = 20);
    Object &myobj = MyFunction(10,5);
    cout << "a=" << myobj.a << endl;

    delete &myobj;
    system("pause");
    return 0;
}

//C++规则，只可能对排列在最后的那些参数提供默认参数               
Object &MyFunction(int b, int a = 20)
{
    Object *o = new Object;
    o->a = a;
    o->b = b;
    return *o;
    /*最后一句为啥return *o,而不是return o;或者return &o?

解决方案1:
*O 返回的是一个对象，O的话返回的是一个地址，你的返回类型为Object类型的引用

解决方案2:
鸟毛，，因为是new出来的，在堆里，所以不会有什么返回局部的说法。楼上乱讲太多了

解决方案4:
楼上说得对，返回的是引用，故返回*o，不过这段代码，*o是在函数里面生成的属于函数里面的局部变量吧，
函数调用回来后会不会*o的空间就被析构函数自动释放了啊。。。

解决方案5:
*O 返回的是一个对象，O的话返回的是一个地址，你的返回类型为Object类型的引用

解决方案6:
& 返回引用类型，所以返回指针

解决方案7:
因为“对指针解引用返回指针指向对象的引用”

解决方案8:
*O 返回的是一个对象，O的话返回的是一个地址，你的返回类型为Object类型的引用
*/
}