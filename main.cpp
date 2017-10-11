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
#define PI (3.141592653589793)

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
//int main() {
////    const float PI = 3.14159;
//    char Ch;
//    double Volume, Radius, Height;
//    std::cout << "This program tells you the volume of a cylinder. \n";
//    std::cout << "How tall is the tank in inches?\n";
//    std::cin >> Height;
//    std::cout << "What is the radius of the tank in inches?\n";
//    std::cin >> Radius;
//    std::cout << "This program is paused. Press Enter to continue. \n";
//    std::cin.get(Ch);
//    std::cout << std::setprecision(2) << std::setiosflags(std::ios::fixed);
//    Volume = (PI * pow(Radius, 2)) * Height;
//       std::cout << "The tank's volume is "<< Volume << "inches cubed!\n";
//    std::cout << PI << "*"<< Radius << "^"<< 2 << "=" << Volume << "\n";
//    return 0;
//}
int main(){
    float Length, Width, Height, Volume, Cost, CCost, CCharge, Charge, Profit;
    Cost = 0.23;
    Charge = 0.50;
    
    std::cout << "What is the length of the crate? \n";
    std::cin >> Length;
    std::cout << "What is the width of the crate? \n";
    std::cin >> Width;
    std::cout << "What is the height of the crate? \n";
    std::cin >> Height;
    Volume = Length * Width * Height;
    CCost = Volume * Cost;
    CCharge = Volume * Charge;
    Profit = CCharge - CCost;
    std::cout << std::setprecision(2) << std::setiosflags(std::ios::fixed);
    std::cout << "The crate costs $" << CCost << " to produce. \n";
    std::cout << "We will charge $" << CCharge << " per crate. \n";
    std::cout << "We will make $" << Profit << " in profit per crate. \n";
    return 0;
}
