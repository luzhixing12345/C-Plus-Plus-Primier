/*
 *Copyright (c) 2022 All rights reserved
 *@description: book sales items
 *@author: Zhixing Lu
 *@date: 2022-05-26
 *@email: luzhixing12345@163.com
 *@Github: luzhixing12345
*/

#include <iostream>
#include "Sales_item.h"

int main() {

    Sales_item item;
    while (std::cin>> item) {
        std::cout << item << std::endl;
    }
    return 0;

}

/*
a.exe < book_sales
*/