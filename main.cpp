#include <iostream>
#include "antenna.hpp"
#include "lumax.hpp"
using namespace std;

int main()
{   setlocale(LC_ALL,"Russian");
    Antenna antenna1;
    antenna1.Show();
    Lumax lumax1;
    lumax1.Show();
    return 0;
}
