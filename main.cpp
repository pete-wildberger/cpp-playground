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
#include <string>
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
//int main(){
//    int money = 0;
//    float Length, Width, Height, Volume, Cost, CCost, CCharge, Charge, Profit;
//    Cost = 0.23;
//    Charge = 0.50;
//    
//    std::cout << "What is the length of the crate? \n";
//    std::cin >> Length;
//    std::cout << "What is the width of the crate? \n";
//    std::cin >> Width;
//    std::cout << "What is the height of the crate? \n";
//    std::cin >> Height;
//    Volume = Length * Width * Height;
//    CCost = Volume * Cost;
//    CCharge = Volume * Charge;
//    Profit = CCharge - CCost;
//    std::cout << std::setprecision(2) << std::setiosflags(std::ios::fixed);
//    if(Profit <= 0){
//        std::cout  << "we can't make that! \n";
//    }
//    if (Profit >= 100){
//        money = 1;
//    }
//    std::cout << "The crate costs $" << CCost << " to produce. \n";
//    std::cout << "We will charge $" << CCharge << " per crate. \n";
//    std::cout << "We will make $" << Profit << " in profit per crate. \n";
//    
//    if(money == 1){
//        std::cout << "we're gonna make some money\n";
//
//    }
//    return 0;
//}
//void displayString(char[], char[]);
//
//void same(void){
//    std::cout << "The strings are the same!\n";
//}
//void different(void){
//    std::cout << "The strings are different!\n";
//}
//int main(){
//    char input1[11], input2[11];
//    
//    std::cout << "Enter a string: \n";
//    std::cin.getline(input1, 11);
//    std::cout << "Enter another string: \n";
//    std::cin.width(10);
//    std::cin.getline(input2, 11);
//    if(!strcmp(input1, input2)){
//        same();
//            } else {
//        different();
//    }
//    displayString(input1, input2);
//    return 0;
//}
//
//void displayString(char in1[], char in2[]) {
//    std::cout << in1 << in2 << "\n";
//}
// recursive functions
//void Message(int);
//int main(){
//    Message(5);
//    return 0;
//}
//void Message(int Times){
//    std::cout << "Message called with " << Times << " in Times. \n";
//    if( Times > 0){
//        std::cout << "This is a recursive function. \n";
//        Message(Times -1);
//    }
//    std::cout << "Message returning with " << Times;
//    std::cout << " in Times. \n";
//}
int main(){
    int ascii[256];
    for(int i = 0; i < 256; i++){
        ascii[i] = i;
        std::cout << i << "  " << char(ascii[i]) << std::endl;
    }
    return 0;
}
