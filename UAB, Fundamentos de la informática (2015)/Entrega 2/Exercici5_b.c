//
//  main.c
//  Ejercicios
//
//  Created by Manuel Gijón Agudo on 30/9/15.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

// Exercici 5, b:

int main(){
    int n,p;
    printf("Introduce el número del mes y el número de días:\n");
    scanf("%d %d", &n, &p);
    if (n == 2) {
        if (p == 28) {
            printf("Correcto.\n");
        }
        else
            printf("Incorrecto.\n");
    }
    else {
        if ((n == 4)||(n == 6)||(n == 9)||(n == 11)){
            if (p == 30) {
                printf("Correcto.\n");
            }
            else
                printf("Incorrecto.\n");
            
        }
        else {
            if (p == 31) {
                printf("Correcto.\n");
            }
            else
                printf("Incorrecto.\n");
        }
    }
    return 0;
}