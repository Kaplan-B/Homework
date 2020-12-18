#ifndef ANTENNA_HPP
#define ANTENNA_HPP
#include <string>
using namespace std;

class Antenna
{
public:
    Antenna(); // ����������� �� ���������
    Antenna(int frequency_range,int antenna_gain,string type_WIFI,int resistance); //����������� �������������
    ~Antenna();//����������
protected:
    int frequency_range;
    int antenna_gain;
    string type_WIFI;
    int resistance;
};

#endif // ANTENNA_HPP
