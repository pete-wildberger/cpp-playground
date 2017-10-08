//
//  main.cpp
//  cpplus
//
//  Created by Peter on 9/27/17.
//  Copyright © 2017 Peter. All rights reserved.
//

#include <iostream>
#include <math.h>

//int main(void) {
//    int pounds;
//    float kiloCon, kilos;
//    kiloCon = 2.21;
//    
//    std::cout << "How much do you weigh in pounds? ";
//    std::cin >> pounds;
//    kilos = pounds / kiloCon;
//    std::cout << "You weigh " << kilos << " kilos" << std::endl;
//
//}
int main(void) {
    double Volume, Radius, Height;
    std::cout << "This program tells you the volume of a cylinder. \n";
    std::cout << "How tall is the tank in inches?\n";
    std::cin >> Height;
    std::cout << "What is the radius of the tank in inches?\n";
    std::cin >> Radius;
    Volume = (3.1415 * pow(Radius, 2)) * Height;
    std::cout << "The tank's volume is "<< Volume << "inches cubed!\n";

}
