#include "antenna.hpp"
#include <iostream>

Antenna::Antenna()
{
    frequency_range = "2400~2500";
    antenna_gain = 9;
    type_WIFI = "������� ���������������";
    resistance = 50;
}
Antenna::~Antenna()
{

}
Antenna::Antenna(string frequency_range,int antenna_gain,string type_WIFI,int resistance)
{   //����� ������������� this
    this->frequency_range = frequency_range;
    this->antenna_gain = antenna_gain;
    this->type_WIFI = type_WIFI;
    this->resistance = resistance;
}
Antenna::Antenna(const Antenna &other) //�������� ������������ �����������
{
    this->frequency_range = other.frequency_range;
    this->antenna_gain = other.antenna_gain;
    this->type_WIFI = other.type_WIFI;
    this->resistance = other.resistance;
}
void Antenna::operator=(const Antenna &other) //���������� ���������
{
    this->frequency_range = other.frequency_range;
    this->antenna_gain = other.antenna_gain;
    this->type_WIFI = other.type_WIFI;
    this->resistance = other.resistance;
}
bool Antenna::operator <(const Antenna &other)
{
    return this->frequency_range < other.frequency_range and
            this->antenna_gain < other.antenna_gain and
            this->type_WIFI < other.type_WIFI and
            this->resistance < other.resistance;
}
bool Antenna::operator >(const Antenna &other)
{
    return this->frequency_range > other.frequency_range and
            this->antenna_gain > other.antenna_gain and
            this->type_WIFI > other.type_WIFI and
            this->resistance > other.resistance;
}
bool Antenna::operator ==(const Antenna &other)
{
    return  this->frequency_range == other.frequency_range and
            this->antenna_gain == other.antenna_gain and
            this->type_WIFI == other.type_WIFI and
            this->resistance == other.resistance;
}
void Antenna::Show()
{
    cout << "��������� �������� �������: " << frequency_range << "\n"
         << "�������� �������: " << antenna_gain << "\n"
         << "��� ������� Wi-Fi: " << type_WIFI << "\n"
         << "������������� : " << resistance << "\n" << endl;
}
//������� ��������
string Antenna::Get_frequency_range()
{
    return frequency_range;
}
int Antenna::Get_antenna_gain()
{
    return antenna_gain;
}
string Antenna::Get_type_WIFI()
{
    return type_WIFI;
}
int Antenna::Get_resistance()
{
    return resistance;
}
//������� ��������
void Antenna::Set_frequency_range(string frequency_range)
{
    this->frequency_range = frequency_range;
}
void Antenna::Set_antenna_gain(int antenna_gain)
{
    this->antenna_gain = antenna_gain;
}
void Antenna::Set_type_WIFI(string type_WIFI)
{
    this->type_WIFI = type_WIFI;
}
void Antenna::Set_resistance(int resistance)
{
    this->resistance = resistance;
}
