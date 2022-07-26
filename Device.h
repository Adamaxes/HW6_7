//
// Created by ayupo on 20.07.2022.
//

#ifndef HW6_7_DEVICE_H
#define HW6_7_DEVICE_H

#include "IElectronics.h"

class Device: virtual public IElectronics
{
public:
    Device(int batteryLife);
    void ShowSpec() override;
    virtual ~Device() = default;
protected:
    int _batteryLife;
};
#endif //HW6_7_DEVICE_H
