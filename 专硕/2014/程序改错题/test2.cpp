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

//C++����ֻ���ܶ�������������Щ�����ṩĬ�ϲ���               
Object &MyFunction(int b, int a = 20)
{
    Object *o = new Object;
    o->a = a;
    o->b = b;
    return *o;
    /*���һ��Ϊɶreturn *o,������return o;����return &o?

�������1:
*O ���ص���һ������O�Ļ����ص���һ����ַ����ķ�������ΪObject���͵�����

�������2:
��ë������Ϊ��new�����ģ��ڶ�����Բ�����ʲô���ؾֲ���˵����¥���ҽ�̫����

�������4:
¥��˵�öԣ����ص������ã��ʷ���*o��������δ��룬*o���ں����������ɵ����ں�������ľֲ������ɣ�
�������û�����᲻��*o�Ŀռ�ͱ����������Զ��ͷ��˰�������

�������5:
*O ���ص���һ������O�Ļ����ص���һ����ַ����ķ�������ΪObject���͵�����

�������6:
& �����������ͣ����Է���ָ��

�������7:
��Ϊ����ָ������÷���ָ��ָ���������á�

�������8:
*O ���ص���һ������O�Ļ����ص���һ����ַ����ķ�������ΪObject���͵�����
*/
}