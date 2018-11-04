#include <iostream>
#include <fstream>

using namespace std;

class Building
{
  private:
    int _layer;
    int _roms;
    int _area;

  public:
    Building(int layer = 0, int roms = 0, int area = 0) : _layer(layer), _roms(roms), _area(area) {}
    virtual void getInformation()
    {
        cout << "layers have " << _layer << endl;
        cout << "roms have " << _roms << endl;
        cout << "area have " << _area << endl;
    }

    virtual ~Building() {}
};

class Housing : Building
{
  private:
    int _bedroom;
    int _bathroom;

  public:
    Housing(int layer = 0, int roms = 0, int area = 0, int bedroom = 0, int bathroom = 0)
        : _bedroom(bedroom), _bathroom(bathroom), Building(layer, roms, area) {}
    void getInformation()
    {
        Building::getInformation();
        cout << "bedroom have " << _bedroom << endl;
        cout << "bashroom have " << _bathroom << endl;
    }
};

int main()
{
    Housing house(1, 2, 3, 4, 5);
    house.getInformation();

    system("pause");
    return 0;
}
