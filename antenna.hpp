#ifndef ANTENNA_HPP
#define ANTENNA_HPP
#include <string>
using namespace std;

class Antenna
{
public:
    //геттеры
    string Get_frequency_range();
    int Get_antenna_gain();
    string Get_type_WIFI();
    int Get_resistance();
    //сеттеры
    void Set_frequency_range(string frequency_range);
    void Set_antenna_gain(int antenna_gain);
    void Set_type_WIFI(string type_WIFI);
    void Set_resistance(int resistance);

    Antenna(); // конструктор по умолчанию
    Antenna(string frequency_range,int antenna_gain,string type_WIFI,int resistance); //конструктор инициализации
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
