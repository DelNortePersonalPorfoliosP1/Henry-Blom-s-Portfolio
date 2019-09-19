//
//  main.c
//  BlomHenryLab1
//
//  Created by Blom, Henry on 9/17/19.
//  Copyright © 2019 Blom, Henry. All rights reserved.
//

#include <stdio.h>
#include "trianglelab.h"
#include "rectanglelab.h"
#include "temperaturelab.h"
#include "datatypeslab.h"
#include "clocklab.h"
int main(int argc, const char * argv[]) {
    int choice = 0;
    
    printf("Which Lab do you want to Run?\n");
    printf("1: Pythagorean\n2: Datatypes\n3: Rectangle\n4: Clock\n5: Fahrenheit\n0: Quit\n");
    scanf("%d", &choice);
    if (choice == 1)
        trianglelab();
    else
        if (choice == 2)
        datatypeslab();
    else
        if (choice == 3)
        rectanglelab();
    else
        if (choice == 4)
        clocklab();
    else
        if (choice == 5)
        temperaturelab();
    else
        if (choice > 5)
        printf("try again");
    else
        if (choice < 0)
        printf("try again");
    else
        if (choice == 0)
    return 0;
}
