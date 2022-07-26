//
// Created by ayupo on 20.07.2022.
//

#ifndef HW6_7_PLAYER_H
#define HW6_7_PLAYER_H

#include "Device.h"

class Player final : virtual public Device{
public:
    Player(int batteryLife, int memory);

    void ShowSpec() override;

protected:
    int _memory;
};
#endif //HW6_7_PLAYER_H
