/*
 *Copyright (c) 2022 All rights reserved
 *@description: calculate the sum of a serious of numbers
 *@author: Zhixing Lu
 *@date: 2022-05-26
 *@email: luzhixing12345@163.com
 *@Github: luzhixing12345
*/

#include <iostream>

int main() {
    int sum = 0;
    int number = 0;
    while (std::cin >> number) {
        sum += number;
    }
    std::cout << "Sum is " << sum << std::endl;
    return 0;
}

/*
windows: ctrl+z
linux: ctrl+d
*/
