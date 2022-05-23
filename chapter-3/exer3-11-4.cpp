/*
 *Copyright (c) 2022 All rights reserved
 *@description: input a float number and print as correct format
 *@author: Zhixing Lu
 *@date: 2022-05-24
 *@email: luzhixing12345@163.com
 *@Github: luzhixing12345
*/


#include <iostream>

int main() {
    float f;
    std::cout << "Enter a floating point number: ";
    std::cin >> f;
    std::cout << "fixed point notation: " << std::fixed << f << std::endl;
    std::cout << "exponential notation: " << std::scientific << f << std::endl;
    std::cout << "p notation: " << std::hexfloat << f << std::endl;
    return 0;
}

/* output:
Enter a floating point number: 64.25
fixed point notation: 64.250000
exponential notation: 6.425000e+001
p notation: 0x0p-57
*/

// attention:
// result is different in different system
