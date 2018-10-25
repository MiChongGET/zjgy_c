#include <iostream>
#include <fstream>

using namespace std;

/**
 * 这题的坑在于两个静态变量a是不一样的，
 * 虽然都存储在静态存储区，名字一样，但是地址值是不一样的。
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