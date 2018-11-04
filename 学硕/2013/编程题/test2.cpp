#include <iostream>
#include <fstream>

using namespace std;

class CTime
{
  private:
    int hour;
    int minute;
    int second;

  public:
    CTime(int hour = 0, int minute = 0, int second = 0) : hour(hour), minute(minute), second(second) {}
    //获取秒数
    int get_total_second()
    {
        return hour * 3600 + minute * 60 + second;
    }

    //获取时间差
    int get_distance(CTime &new_time)
    {
        return this->get_total_second() - new_time.get_total_second();
    }
    //比较时间
    int time_compare(CTime &new_time)
    {
        int dis = this->get_distance(new_time);

        if (dis < 0)
        {
            return -1;
        }
        else if (dis == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
};

int main()
{
    CTime c1(6, 12, 20);
    CTime c2(5, 12, 12);
    cout << "time distance:" << c1.get_distance(c2) << endl;
    cout << c1.time_compare(c2);
    system("pause");
    return 0;
}
