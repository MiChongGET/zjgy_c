#include <iostream>
#include <fstream>

using namespace std;
void other();

int main()
{

    int x = 0, y = 3;
    other();
    cout << x << " " << y << "\n";
    other();
    system("pause");
    return 0;
}

void other()
{
    static int x = 2;
    int y = 6;
    x += 2;
    cout << x << " " << y << "\n";
}