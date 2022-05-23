/*
 *Copyright (c) 2022 All rights reserved
 *@description: Convert inch units to centimeters
 *@author: Zhixing Lu
 *@date: 2022-05-23
 *@email: luzhixing12345@163.com
 *@Github: luzhixing12345
*/

#include <stdio.h>

double inch_to_cm(double inch) {
    return inch * 2.54;
}

int main() {
    double inch;
    printf("Enter inch: ");
    scanf("%lf", &inch);
    printf("%lf inch = %lf cm\n", inch, inch_to_cm(inch));
    return 0;
}
