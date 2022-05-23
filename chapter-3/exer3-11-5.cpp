/*
 *Copyright (c) 2022 All rights reserved
 *@description: change age to seconds
 *@author: Zhixing Lu
 *@date: 2022-05-24
 *@email: luzhixing12345@163.com
 *@Github: luzhixing12345
*/


#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    int seconds_in_year = 3.156e7;
    std::cout << "You are " << age * seconds_in_year << " seconds old." << std::endl;
    return 0;
}

// Enter your age: 21
// You are 662760000 seconds old.
