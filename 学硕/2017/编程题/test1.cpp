#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{

    ifstream f1("D:\\file.txt");
    ofstream f2("D:\\out.txt");
    vector<int> nums;
    if (f1.is_open() && f2.is_open())
    {

        int num;

        while (f1 >> num)
        {
            nums.push_back(num);
        }

        sort(nums.begin(), nums.end(), [](int n1, int n2) {
            return n1 < n2;
        });

        for (int n : nums)
        {
            f2 << n << " ";
        }

        int index = nums.size();
        cout << "nums size is " << index << endl;

        int n1 = nums[index - 1];
        int n2 = nums[index - 2];
        int minNum = min(n1, n2);
        for (int i = minNum; i > 0; i--)
        {

            if (n1 % i == 0 && n2 % i == 0)
            {
                cout << "the max common divisor is " << i << endl;
                break;
            }
        }
    }

    system("pause");
    return 0;
}
