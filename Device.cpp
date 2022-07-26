//
// Created by ayupo on 20.07.2022.
//
#include "Device.h"
Device::Device(int batteryLife) : _batteryLife(batteryLife) {
}
void Device::ShowSpec() {
    cout<<"Device:batteryLife "<<_batteryLife<<endl;
}

