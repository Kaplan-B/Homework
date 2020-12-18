#ifndef ANTENNA_HPP
#define ANTENNA_HPP
#include <string>
using namespace std;

class Antenna
{
public:
    //�������
    string Get_frequency_range();
    int Get_antenna_gain();
    string Get_type_WIFI();
    int Get_resistance();
    //�������
    void Set_frequency_range(string frequency_range);
    void Set_antenna_gain(int antenna_gain);
    void Set_type_WIFI(string type_WIFI);
    void Set_resistance(int resistance);

    Antenna(); // ����������� �� ���������
    Antenna(string frequency_range,int antenna_gain,string type_WIFI,int resistance); //����������� �������������
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
