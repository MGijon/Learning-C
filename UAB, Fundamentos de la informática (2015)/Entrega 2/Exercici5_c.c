//
//  main.c
//  Ejercicios
//
//  Created by Manuel Gijón Agudo on 30/9/15.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

// Exercici 5, c:

int main() {
    int any;
    printf("Introduce el año:\n\n");
    scanf("%d", &any);
    if (((any%4==0) && (any%100!=0)) || ((any%100==0) && (any%400==0))) {
        printf("Febrero tiene 29 días.\n");
    }
    else
        printf("Febrero tiene 28 días.\n");
    return 0;
}