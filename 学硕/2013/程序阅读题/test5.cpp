#include <iostream>
#include <fstream>

using namespace std;

class Task
{
    static Task *obj;
    int count;
    Task() : count(20) {}

  public:
    static Task *create()
    {
        if (!obj)
            obj = new Task;
        obj->count += 2;

        return obj;
    }

    int getCount() const { return count; }
};

Task *Task::obj = NULL;

int main()
{
    Task *p1 = Task::create();
    cout << p1->getCount() << endl; //22
    Task *p2 = Task::create();
    cout << p2->getCount() << endl; //24
    p1 = Task::create();
    cout << p1->getCount() << endl; //26
    delete p1;

    system("pause");
    return 0;
}
