#include "lumax.hpp"
#include <string>
#include <iostream>
using namespace std;
Lumax::Lumax()
{
    frequency_range = "2400~2500";
    antenna_gain = 9;
    type_WIFI = "Внешняя всенаправленная";
    resistance = 50;
    operating_temperature = 50;
    antenna_connectors = 1;
    polarization = "Вертикальная и горизонтальная";
}
Lumax::Lumax(string frequency_range,int antenna_gain,string type_WIFI,int resistance,int operating_temperature,int antenna_connectors,string polarization)
{
    this->frequency_range = frequency_range;
    this->antenna_gain = antenna_gain;
    this->type_WIFI =type_WIFI;
    this->resistance = resistance;
    this->operating_temperature = operating_temperature;
    this->antenna_connectors = antenna_connectors;
    this->polarization = polarization;
}
Lumax::~Lumax()
{

}
Lumax::Lumax(const Lumax &other)
{
    this->frequency_range = other.frequency_range;
    this->antenna_gain = other.antenna_gain;
    this->type_WIFI = other.type_WIFI;
    this->resistance = other.resistance;
    this->operating_temperature = other.operating_temperature;
    this->antenna_connectors = other.antenna_connectors;
    this->polarization = other.polarization;
}
void Lumax::operator = (const Lumax &other)
{
    this->frequency_range = other.frequency_range;
    this->antenna_gain = other.antenna_gain;
    this->type_WIFI = other.type_WIFI;
    this->resistance = other.resistance;
    this->operating_temperature = other.operating_temperature;
    this->antenna_connectors = other.antenna_connectors;
    this->polarization = other.polarization;
}
bool Lumax::operator >(const Lumax &other)
{
    return this->frequency_range > other.frequency_range and
            this->antenna_gain > other.antenna_gain and
            this->type_WIFI > other.type_WIFI and
            this->resistance > other.resistance and
            this->operating_temperature > other.operating_temperature and
            this->antenna_connectors > other.antenna_connectors and
            this->polarization > other.polarization;
}
bool Lumax::operator <(const Lumax &other)
{
    return this->frequency_range < other.frequency_range and
            this->antenna_gain < other.antenna_gain and
            this->type_WIFI < other.type_WIFI and
            this->resistance < other.resistance and
            this->operating_temperature < other.operating_temperature and
            this->antenna_connectors < other.antenna_connectors and
            this->polarization < other.polarization;
}
bool Lumax::operator ==(const Lumax &other)
{
    return this->frequency_range == other.frequency_range and
            this->antenna_gain == other.antenna_gain and
            this->type_WIFI == other.type_WIFI and
            this->resistance == other.resistance and
            this->operating_temperature == other.operating_temperature and
            this->antenna_connectors == other.antenna_connectors and
            this->polarization == other.polarization;
}
void Lumax::Show()
{
    cout << "Частотный диапазон антенны: " << frequency_range << "\n"
         << "Усиление антенны: " << antenna_gain << "\n"
         << "Тип антенны Wi-Fi: " << type_WIFI << "\n"
         << "Сопротивление: " << resistance << "\n"
         << "Рабочая температура: " << operating_temperature <<"\n"
         << "Количество разъемов на антенне: " << antenna_connectors  << "\n"
         << "Поляризация: " << polarization << endl;

}
