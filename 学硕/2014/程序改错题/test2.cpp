#include <iostream>
#include <fstream>

using namespace std;

class sample
{
  public:
    sample() { cout << (x = 0); }
    void dosample(int i, int j) { cout << (x = i + j); }
    ~sample() { cout << ++x; }

  private:
    int x;
};

int main()
{
    sample *p1 = new sample[3];
    delete[] p1;

    system("pause");
    return 0;
}
