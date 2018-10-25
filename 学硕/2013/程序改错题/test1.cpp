#include <iostream>
#include <fstream>

using namespace std;

void mystrcpy(char *str1,char *str2)
{
    int i;
    
    for( i = 0; str2[i]!='\0'; i++)
    {
        str1[i]=str2[i];
    }
    str1[i+1]= '\0';
}

int main()

{
    char a[9];
    char *b="hello c++";
    mystrcpy(a,b);
    cout<<"a="<<a<<endl;
    system("pause");
    return 0;
}
