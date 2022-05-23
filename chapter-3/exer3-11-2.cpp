/*
 *Copyright (c) 2022 All rights reserved
 *@description: get an ASCII input and print the corresponding character
 *@author: Zhixing Lu
 *@date: 2022-05-24
 *@email: luzhixing12345@163.com
 *@Github: luzhixing12345
*/

#include <iostream>

int main() {
    int c;
    std::cout << "Enter an ASCII character: ";
    std::cin >> c;
    std::cout << "The ASCII code for " << c << " is " << (char)c << std::endl;
    return 0;
}

/* output:
Enter an ASCII character: 66
The ASCII code for 66 is B
*/
