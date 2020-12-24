#ifndef LUMAX_HPP
#define LUMAX_HPP
#include "antenna.hpp"
#include <string>
using namespace std;
class Lumax: public Antenna
{
public:
    Lumax();
    Lumax(string frequency_range,int antenna_gain,string type_WIFI,int resistance,int operating_temperature,int antenna_connectors,string polarization);
    ~Lumax();
    Lumax(const Lumax &other);
    void Show() override;
    void operator = (const Lumax &other);
    bool operator >(const Lumax &other);
    bool operator <(const Lumax &other);
    bool operator ==(const Lumax &other);
private:
    int operating_temperature;
    int antenna_connectors;
    string polarization;
};

#endif // LUMAX_HPP
