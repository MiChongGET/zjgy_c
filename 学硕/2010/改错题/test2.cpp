#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    float x, max, min;
    int i;

    //��0��Ϊ1��ѭ��ִ�����Σ����߰�����if�е�1��Ϊ0��ѭ���Ĵ�
    for (i = 1; i <= 3; i++)
    {
        scanf("%f", &x);
        //ע��������==��������=
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
