//
// Created by ayupo on 20.07.2022.
//
#include "Smartphone.h"
Smartphone::Smartphone(int batteryLife, int weight) : Device(batteryLife), Appliances(weight)
{

};
void Smartphone::ShowSpec() {
    cout<<"Smartphone:weight "<<_weight<<"\n"<<"Smartphone:batteryLife "<<_batteryLife<<endl;
}
