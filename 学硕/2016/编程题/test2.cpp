#include <iostream>
#include <fstream>

using namespace std;

class CDate
{
  private:
    int _year;
    int _month;
    int _day;
    int getTotal() const
    {
        return _year * 1234 + _month * 123 + _day;
    }

  public:
    CDate(int year = 0, int month = 0, int day = 0) : _year(year), _month(month), _day(day) {}
    void SetYear(int year)
    {
        this->_year = year;
    }
    void SetMonth(int month)
    {
        this->_month = month;
    }
    void SetDay(int day)
    {
        this->_day = day;
    }

    bool operator==(const CDate &date) const;
    bool operator>(const CDate &date) const
    {
        return getTotal() > date.getTotal();
    }
    bool operator<(const CDate &date) const
    {
        return getTotal() < date.getTotal();
    }
};

bool CDate::operator==(const CDate &d) const
{
    return getTotal() == d.getTotal();
}

int main()
{
    CDate d1(2018, 11, 4);
    CDate d2(2017, 11, 4);
    cout << (d1 == d2) << endl;
    cout << (d1 > d2) << endl;
    cout << (d1 < d2) << endl;

    system("pause");
    return 0;
}
