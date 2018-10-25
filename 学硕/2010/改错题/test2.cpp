#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    float x, max, min;
    int i;

    //把0改为1，循环执行三次，或者把下面if中的1改为0，循环四次
    for (i = 1; i <= 3; i++)
    {
        scanf("%f", &x);
        //注意这里是==，而不是=
        if (i == 1)
        {
            max = x;
            min = x;
        }
        if (x > max)
            max = x;
        if (x < min)
            min = x;
    }

    cout << "max=" << max << "  min=" << min << endl;
    system("pause");
    return 0;
}
