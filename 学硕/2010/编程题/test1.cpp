#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    ofstream f1("D:\\f1.dat"),
        f2("D:\\f2.dat");

    //д��ʮ������
    if (f1.is_open() && f2.is_open())
    {
        int num;

        for (int i = 0; i < 6; i++)
        {
            cin >> num;

            if (num % 2 != 0)
            {
                f1 << num << endl;
            }

            else
            {
                f2 << num << endl;
            }
        }
    }
    ifstream f11("D:\\f1.dat"),
        f22("D:\\f2.dat");

    vector<int> nums;

    if (f11.is_open() && f22.is_open())
    {
        int num;

        //�ļ�1д�뵽����
        while (f11 >> num)
        {
            nums.push_back(num);
        }

        while (f22 >> num)
        {
            nums.push_back(num);
        }

        //����
        sort(nums.begin(), nums.end(), [](const int x1, const int x2) { return x1 < x2; });
    }

    //������õ�˳��д�뵽�ļ���
    ofstream off1("D:\\f1.dat");
    if (off1.is_open())
    {
        //��java��foreach����
        for (int x : nums)
        {
            off1 << x << endl;
        }
    }

    system("pause");
    return 0;
}
