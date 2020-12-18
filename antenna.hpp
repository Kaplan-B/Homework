#ifndef ANTENNA_HPP
#define ANTENNA_HPP
#include <string>
using namespace std;

class Antenna
{
public:
    Antenna(); // конструктор по умолчанию
    Antenna(int frequency_range,int antenna_gain,string type_WIFI,int resistance); //конструктор инициализации
    ~Antenna();//деструктор
protected:
    int frequency_range;
    int antenna_gain;
    string type_WIFI;
    int resistance;
};

#endif // ANTENNA_HPP
