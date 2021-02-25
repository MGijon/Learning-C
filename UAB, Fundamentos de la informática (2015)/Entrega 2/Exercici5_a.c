//
//  main.c
//  Ejercicios
//
//  Created by Manuel Gijón Agudo on 30/9/15.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

// Exercici 5, a:

int main(){
    int n,p;
    printf("Introduce el número del mes:\n");
    scanf("%d", &n);
    if (n == 2) {
        p = 28;   // número de días, creo una variable porque más adelante puede hacerme falta.
        printf("tiene %d días.", p);
    }
    else {
        if ((n == 4)||(n == 6)||(n == 9)||(n == 11)){
            p = 30;
            printf("tiene %d días.\n", p);
        }
        else {
            p = 31;
            printf("tiene %d días.\n", p);
        }
    }
    return 0;
}