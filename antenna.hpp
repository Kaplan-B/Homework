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
    Antenna(); // ����������� �� ���������
    Antenna(int frequency_range,int antenna_gain,string type_WIFI,int resistance); //����������� �������������
    ~Antenna();//����������
    Antenna(const Antenna &other); //������������ ������ ��� �������� �������
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
