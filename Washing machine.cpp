//
// Created by ayupov on 20.07.2022.
//
#include "Washing machine.h"
Washing_machine::Washing_machine(int weight, int rpm) : Appliances(weight), _rpm(rpm)
{

}
void Washing_machine::ShowSpec() {
    cout<<"Weight: "<<_weight<<endl;
    cout<<"RPM: "<<_rpm<<endl;
}
