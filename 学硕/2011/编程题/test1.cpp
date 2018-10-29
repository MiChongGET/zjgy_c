#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    int nums[5] = {};
    int num, len = 5;

    for (int i = 0; i < len; i++)
    {
        cin >> num;
        nums[i] = num;
    }

    //删除重复元素
    for (int i = 0; i < len; i++)
    {
        int j = 0;

        for (j = i + 1; j < len; j++)
        {

            if (nums[j] == nums[i])  
            {

                for (int k = j + 1; k < len; k++)
                {
                    nums[k - 1] = nums[k];
                }
                --len;
                --j;
            }
        }
    }

    //从小到大排序
    for (int m = 0; m < len; m++)
    {

        for (int n = m + 1; n < len; n++)
        {

            if (nums[m] > nums[n])
            {
                int temp = nums[n];
                nums[n] = nums[m];
                nums[m] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << nums[i] << endl;
    }

    system("pause");
    return 0;
}
