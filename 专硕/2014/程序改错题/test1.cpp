#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    char str[5][7] = {"First", "second", "third", "four", "five"};

    char *cp[5] = {str[4], str[3], str[2], str[1], str[0]};
    int i = 0;

    while (i < 5)
    {
         printf("%s\n", *(cp + i));
        //cout << *(cp + i) << endl;
        i++;
    }

    system("pause");
    return 0;
}
