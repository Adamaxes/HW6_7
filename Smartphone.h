//
// Created by ayupo on 20.07.2022.
//

#ifndef HW6_7_SMARTPHONE_H
#define HW6_7_SMARTPHONE_H
#include "Device.h"
#include "Appliances.h"
class Smartphone final : public Device, Appliances
{
public:
    Smartphone(int batteryLife, int weight);
    void ShowSpec() override;
};
#endif //HW6_7_SMARTPHONE_H
