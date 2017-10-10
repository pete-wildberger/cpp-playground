//
//  main.cpp
//  cpplus
//
//  Created by Peter on 9/27/17.
//  Copyright © 2017 Peter. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <iomanip>

//int main() {
//    int pounds;
//    float kiloCon, kilos;
//    kiloCon = 2.21;
//    
//    std::cout << "How much do you weigh in pounds? ";
//    std::cin >> pounds;
//    kilos = float(pounds) / kiloCon;
//    std::cout << "You weigh " << kilos << " kilos" << std::endl;
//    return 0;
//
//}
int main() {
    const float PI = 3.14159;
    double Volume, Radius, Height;
    std::cout << "This program tells you the volume of a cylinder. \n";
    std::cout << "How tall is the tank in inches?\n";
    std::cin >> Height;
    std::cout << "What is the radius of the tank in inches?\n";
    std::cin >> Radius;
    Volume = (PI * pow(Radius, 2)) * Height;
    std::cout << "The tank's volume is "<< std::setprecision(4) << Volume << "inches cubed!\n";
    std::cout << PI << Radius << "^"<< 2 << "=" << std::setprecision(4) << Volume << "\n";
    return 0;
}
