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
        cout << "��ǰʱ����:" << _hour << "ʱ" << _minute << "��" << endl;
    }

    //��Ԫ
    time24 operator+(int minute) const;
    //�ж�����ʱ���Ƿ����
    bool operator==(const time24 &time) const;

    //�������
    friend istream &operator>>(istream &is, time24 &time);
    friend ostream &operator<<(ostream &os, time24 &time);
};

//��д+����
time24 time24::operator+(int minute) const
{
    //��ʱ��=Сʱ X 60 + ��ǰ���� + Ҫ�ӵķ���
    int toatal_minute = _hour * 60 + _minute + minute;
    time24 now_time;

    int now_hour = (toatal_minute / 60) % 24;
    int now_minute = toatal_minute % 60;

    now_time.setTime(now_hour, now_minute);

    return now_time;
}

//�ж�����ʱ���Ƿ����
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
    os << "��ǰʱ����:" << time._hour << "ʱ" << time._minute << "��" << endl;
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
