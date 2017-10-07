//
//  main.c
//  Ejercicios
//
//  Created by Manuel Gijón Agudo on 30/9/15.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

/* EJERCICIO 1 3b i 3c */
int main(){
    int n;
    printf("Introduce el número:\n");
    scanf("%d", &n);
    if (n<0) {
        n= -n;
        printf("El valor absoluto es: %d\n", n);
    }
    else
        printf("El valor absoluto es: %d\n",n);
    
}
