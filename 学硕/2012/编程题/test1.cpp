#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //����д����ԭ������һ���ַ���
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

    //     //���������һ��Ԫ��
    //     char c = chars[0];

    //     //��������ǰ�ƶ�һλ�����ǵ���һλ
    //     for (int m = 0; m < len - 1; m++)
    //     {
    //         chars[m] = chars[m + 1];
    //     }
    //     //��ԭ����һλ��Ԫ�ظ�ֵ�����һλ
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

        //���������һ��Ԫ��
        char c = str[0];

        //��������ǰ�ƶ�һλ�����ǵ���һλ
        for (int m = 0; m < len - 1; m++)
        {
            str[m] = str[m + 1];
        }
        //��ԭ����һλ��Ԫ�ظ�ֵ�����һλ
        str[len - 1] = c;
    } 

    system("pause");
    return 0;
}
