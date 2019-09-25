//
//  main.c
//  patternslab
//
//  Created by Blom, Henry on 9/23/19.
//  Copyright © 2019 Blom, Henry. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i, j, input;
    
    puts("which pyramid? 1, 2, 3, 4?");
    scanf("%d", &input);
    if (input = 1){
        for(i=1; i<=10; ++i)
        {
            for(j=1; j<=i; ++j)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
        else if (input = 2){
            for(i=10; i>=1; --i)
            {
                for(j=1; j<=i; ++j)
                {
                    printf("* ");
                }
                printf("\n");
            }
    }
}
