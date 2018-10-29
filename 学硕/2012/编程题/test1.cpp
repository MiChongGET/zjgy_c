#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //数组写法，原题意是一个字符串
    // char chars[5], c;
    // int len = 5;

    // for (int i = 0; i < len; i++)
    // {
    //     cin >> c;
    //     chars[i] = c;
    // }

    // for (int i = 0; i < len; i++)
    // {

    //     for (int n = 0; n < len; n++)
    //     {
    //         cout << chars[n];
    //     }
    //     cout << endl;

    //     //保存数组第一个元素
    //     char c = chars[0];

    //     //将数组往前移动一位，覆盖掉第一位
    //     for (int m = 0; m < len - 1; m++)
    //     {
    //         chars[m] = chars[m + 1];
    //     }
    //     //将原来第一位的元素赋值给最后一位
    //     chars[len - 1] = c;
    // }

    string str;
    cin >> str;
    int len = str.length();

    for (int i = 0; i < len; i++)
    {

        for (int n = 0; n < len; n++)
        {
            cout << str[n];
        }
        cout << endl;

        //保存数组第一个元素
        char c = str[0];

        //将数组往前移动一位，覆盖掉第一位
        for (int m = 0; m < len - 1; m++)
        {
            str[m] = str[m + 1];
        }
        //将原来第一位的元素赋值给最后一位
        str[len - 1] = c;
    } 

    system("pause");
    return 0;
}
