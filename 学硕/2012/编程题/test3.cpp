#include <iostream>
#include <fstream>

using namespace std;

class Account
{
  private:
    string _name;
    double _money;

  public:
    Account(double money = 0, const string &name = "") : _name(name), _money(money) {}
    void showMoney()
    {
        cout << "name:" << _name << " money:" << _money << endl;
    }
    void increaseMoney(double money)
    {
        _money += money;
    }

    void exchangeMoney(Account &other, double money)
    {
        cout << "change before:" << endl;
        this->showMoney();
        other.showMoney();

        this->reduceMoney(money);
        other.increaseMoney(money);
        cout << "change after:" << endl;
        this->showMoney();
        other.showMoney();
    }

    virtual void reduceMoney(double num, double rate = 0)
    {
        _money -= num * (1 + rate);
    }
    virtual ~Account() = 0;
};

Account::~Account() {}

class Saving : public Account
{
  private:
    double _rate;

  public:
    Saving(double money = 0, const string &name = "", double rate = 0) : Account(money, name), _rate(rate) {}
    void reduceMoney(double num, double rate = 0)
    {
        Account::reduceMoney(num, _rate);
    }
};

class Checking : public Account
{
  private:
    double _rate;

  public:
    Checking(double money = 0, const string &name = "", double rate = 0) : Account(money, name), _rate(rate) {}
    void reduceMoney(double num, double rate = 0)
    {
        Account::reduceMoney(num, _rate);
    }
};

int main()
{
    Saving acc1(2000, "hong", 0.2);
    Checking acc2(3000, "ming", 0.1);
    acc1.exchangeMoney(acc2,200);

    system("pause");
    return 0;
}
