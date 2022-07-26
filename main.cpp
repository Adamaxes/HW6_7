#include <iostream>
#include "IElectronics.h"
#include "Device.h"
#include "Appliances.h"
#include "Player.h"
#include "Washing machine.h"
#include "Smartphone.h"

int main() {
    IElectronics * market[5];
    market[0] = new Device(100);                           //batteryLife - 100 years
    market[1] = new Appliances(500);                          //weight - 500 gr.
    market[2] = new Player(400, 1000);              //memory - 1000 gb
    market[3] = new Washing_machine(10000, 5000);         //rpm - 5000 rounds per minute
    market[4] = new Smartphone(20,300);
bool open = true;
while (open)
{
    cout << "Choose the product : 1 - Device , 2 - Appliances, 3 - Player, 4 - Washing machine, 5 - Smartphone, 0 exit" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
        case 1:
            market[0] -> ShowSpec();
            break;

        case 2:
            market[1] -> ShowSpec();
            break;

        case 3:
            market[2] -> ShowSpec();
            break;

        case 4:
            market[3] -> ShowSpec();
            break;

        case 5:
            market[4] -> ShowSpec();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Choose the product from 1 to 5 or 0 for exit" << endl;
            break;
    }
}
    delete market[0];
    delete market[1];
    delete market[2];
    delete market[3];
    delete market[4];

    return 0;
}
