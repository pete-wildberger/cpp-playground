//
//  main.cpp
//  cpplus
//
//  Created by Peter on 9/27/17.
//  Copyright © 2017 Peter. All rights reserved.
//

#include <iostream>

int main(void) {
    int pounds;
    float kiloCon, kilos;
    kiloCon = 2.21;
    
    std::cout << "How much do you weigh in pounds? ";
    std::cin >> pounds;
    kilos = pounds / kiloCon;
    std::cout << "You weigh " << kilos << " kilos" << std::endl;

}
