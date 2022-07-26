//
// Created by ayupo on 20.07.2022.
//

#ifndef HW6_7_IELECTRONICS_H
#define HW6_7_IELECTRONICS_H

#include <iostream>
using namespace std;
class IElectronics
{
public:
    virtual void ShowSpec() = 0;
    virtual ~IElectronics() =  default;
};

#endif //HW6_7_IELECTRONICS_H
