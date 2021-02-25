//
//  main.c
//  Ejercicios
//
//  Created by Manuel Gijón Agudo on 30/9/15.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

int main(){
    int celsius;
    float faren;
    printf("Introduce la temperatura en grados Celsius:\n");
    scanf("%d", &celsius);
    faren = celsius*(9/5) + 32;
    printf("La temperatura en grados Fahrenheit es: %f\n", faren);
    
}
