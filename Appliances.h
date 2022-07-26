//
// Created by ayupo on 20.07.2022.
//

#ifndef HW6_7_APPLIANCES_H
#define HW6_7_APPLIANCES_H

#include "IElectronics.h"

class Appliances: public virtual IElectronics {
public:
    Appliances(int weight);

    void ShowSpec() override;

protected:
    int _weight;
};

#endif //HW6_7_APPLIANCES_H
