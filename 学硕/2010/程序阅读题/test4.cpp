#include <iostream>
#include <fstream>

using namespace std;

/**
 * ����Ŀ�����������̬����a�ǲ�һ���ģ�
 * ��Ȼ���洢�ھ�̬�洢��������һ�������ǵ�ֵַ�ǲ�һ���ġ�
 * 
 */

void func();
int n = 1;

int main()
{

    static int a;
    int b= -10;

    printf("a=%d,b=%d,c=%d",a,b,n);
    b+=4;
    func();
    printf("a=%d,b=%d,c=%d",a,b,n);
    n+=10;
    func();

    system("pause");
    return 0;
}

void func(){
    static int a = 2;
    int b = 5;
    a+=2;
    b+=5;
    n+=12;
    printf("a=%d,b=%d,c=%d",a,b,n);
}