#include <iostream>
#include "./include/AdaI2C.h"

int AdaI2C::GetPiRevision()
{
    std::ifstream ifs("/proc/cpuinfo");
    std::string line;
    while(getline(ifs,line))
    {
        std::cout << line << std::endl;
    }
    return 0;
}

//-----------------------------------
// Gets the I2C bus number.
// return /dev/i2c#
//-----------------------------------
int AdaI2C::GetPiI2CBusNumber()
{
    if(AdaI2C::GetPiRevision() > 1)
    {
        return 1;
    }
    return 0;
}
