//
// Created by ayupo on 20.07.2022.
//
#include "Player.h"
Player::Player(int batteryLife, int memory) : Device(batteryLife), _memory(memory) {

}
void Player::ShowSpec(){
    cout<<"Player:batteryLife "<<_batteryLife<<"\n"<<"Player:memory"<<_memory<<endl;
}