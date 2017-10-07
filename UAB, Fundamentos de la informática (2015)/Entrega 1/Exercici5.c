//
//  main.c
//  Ejercicios
//
//  Created by Manuel Gijón Agudo on 30/9/15.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

int main(){
    int total, x, y, z;
    printf("Introduce el número de billetes de 5, 10 y 20 Euros\n");
    scanf("%d %d %d", &x, &y, &z);
    total = x*5 + y*10 + z*20;
    // Me aseguro que todas las cantidades sean positivas.
    if ((x<0) || (y<0) || (z<0)){
        printf("Alguna de las cantidades es negativa\n");
    }
    else
        printf("El total es: %d\n", total);
}
