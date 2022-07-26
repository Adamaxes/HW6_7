//
// Created by ayupo on 20.07.2022.
//

#ifndef HW6_7_WASHING_MACHINE_H
#define HW6_7_WASHING_MACHINE_H

#include "Appliances.h"

class Washing_machine final: public Appliances {
public:
    Washing_machine(int weight, int rpm);

    void ShowSpec() override;

protected:
    int _rpm;
};
#endif //HW6_7_WASHING_MACHINE_H
