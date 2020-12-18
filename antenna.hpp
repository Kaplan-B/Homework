#ifndef ANTENNA_HPP
#define ANTENNA_HPP
#include <string>
using namespace std;

class Antenna
{
public:
    string Get_frequency_range();
    int Get_antenna_gain();
    string Get_type_WIFI();
    int Get_resistance();
    Antenna(); // конструктор по умолчанию
    Antenna(int frequency_range,int antenna_gain,string type_WIFI,int resistance); //конструктор инициализации
    ~Antenna();//деструктор
    Antenna(const Antenna &other); //используется только при создании объекта
    void operator = (const Antenna &other);
    bool operator < (const Antenna &other);
    bool operator > (const Antenna &other);
    bool operator == (const Antenna &other);
    void Show();
protected:
    string frequency_range;
    int antenna_gain;
    string type_WIFI;
    int resistance;
};

#endif // ANTENNA_HPP
