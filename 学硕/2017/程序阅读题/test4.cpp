#include <iostream>
#include <fstream>

using namespace std;

/**
 * key: 21 1
        21 2
        21 3
 * 
 * 
 */

static int allcount = 0;
class Task
{
    int x;
    Task() : x(20)
    {
        allcount++;
        x++;
    }

  public:
    static Task *creat()
    {
        return new Task;
    }
    int getX() const
    {
        return x;
    }
    int getAllCount()
    {
        return allcount;
    }
};
int main()
{
    Task *p[3];
    for (int i = 0; i < 3; i++)
    {
        p[i] = Task::creat();
        cout << p[i]->getX() << " " << p[i]->getAllCount() << endl;
    }
    system("pause");
    return 0;
}
