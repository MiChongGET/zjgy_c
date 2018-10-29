#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string str;
    cin >> str;

    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
    }

    ofstream f("D:\\test");
    if (f.is_open())
    {
        f << str;
    }
    else
    {
        return 0;
    }
    system("pause");
    return 0;
}
