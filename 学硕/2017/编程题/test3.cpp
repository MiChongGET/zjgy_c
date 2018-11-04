#include <iostream>
#include <fstream>

using namespace std;

void printNums(int a, int b)
{

    for (int i = a; i <= b; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int a, b, c, d;
    cin.get();
    cin >> a;
    cin.get();
    cin >> b;
    cin.get();
    cin.get();
    cin.get();
    cin >> c;
    cin.get();
    cin >> d;
    cin.get();

    // printNums(b, c);

    if (c < a)
    {
        if (d < a)
        {
            cout << "no same areas!" << endl;
        }
        if (b < d)
        {
            printNums(a, b);
        }
        else
        {
            printNums(a, d);
        }
    }
    else
    {

        if (c > b)
        {
            cout << "no same areas!" << endl;
        }
        else if (d > b)
        {
            printNums(c, b);
        }
        else
        {
            printNums(c, d);
        }
    }

    system("pause");
    return 0;
}
