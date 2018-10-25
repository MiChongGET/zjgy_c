#include <iostream>
#include <fstream>

using namespace std;

class time24
{
  private:
    int _hour;
    int _minute;

  public:
    time24(int _hour = 0, int _minute = 0) : _hour(_hour), _minute(_minute) {}
    void setTime(int hour, int minute)
    {
        _hour = hour;
        _minute = minute;
    }

    int getHour() const
    {
        return _hour;
    }

    int getMinute() const
    {
        return _minute;
    }

    void getTime()
    {
        cout << "当前时间是:" << _hour << "时" << _minute << "分" << endl;
    }

    //友元
    time24 operator+(int minute) const;
    //判断两个时间是否相等
    bool operator==(const time24 &time) const;

    //输入输出
    friend istream &operator>>(istream &is, time24 &time);
    friend ostream &operator<<(ostream &os, time24 &time);
};

//重写+方法
time24 time24::operator+(int minute) const
{
    //总时间=小时 X 60 + 当前分钟 + 要加的分钟
    int toatal_minute = _hour * 60 + _minute + minute;
    time24 now_time;

    int now_hour = (toatal_minute / 60) % 24;
    int now_minute = toatal_minute % 60;

    now_time.setTime(now_hour, now_minute);

    return now_time;
}

//判断两个时间是否相等
bool time24::operator==(const time24 &time) const
{
    return time._hour == _hour && time._minute == _minute;
}

istream &operator>>(istream &is, time24 &time)
{
    int hour, minute;
    is >> hour >> minute;
    time.setTime(hour, minute);
    return is;
}
ostream &operator<<(ostream &os, time24 &time)
{
    os << "当前时间是:" << time._hour << "时" << time._minute << "分" << endl;
    return os;
}

int main()
{

    time24 time(22, 58);

    // time = time + 20;
    // time.getTime();
    // time24 time2(22, 0);

    // cout << (time == time2) << endl;

    cin >> time;
    cout << time;

    system("pause");
    return 0;
}
