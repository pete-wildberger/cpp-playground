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
    float kilos;
    
    
    std::cout << "How much do you weigh in pounds? ";
    std::cin >> pounds;
    kilos = pounds / 2.21;
    std::cout << "You weigh " << kilos << " kilos" << std::endl;

}
