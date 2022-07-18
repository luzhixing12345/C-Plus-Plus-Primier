/*
 *Copyright (c) 2022 All rights reserved
 *@description: book sales sum
 *@author: Zhixing Lu
 *@date: 2022-05-26
 *@email: luzhixing12345@163.com
 *@Github: luzhixing12345
*/


#include <iostream>
#include "Sales_item.h"

int main() {

    Sales_item total;
    std::cin >> total;
    Sales_item item;
    while (std::cin >> item) {
        total += item;
    }
    std::cout << total << std::endl;8
    return 0;

}