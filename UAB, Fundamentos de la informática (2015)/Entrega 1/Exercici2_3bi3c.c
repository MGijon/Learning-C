//
//  main.c
//  Ejercicios
//
//  Created by Manuel Gijón Agudo on 30/9/15.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

/* EJERCICIO 2 3b i 3c */
// MÁXIMO ENTRE CUATRO NÚMEROS ENTEROS.
int main(){
    int n1, n2, n3, n4, max;
    printf("Introduce los cuatro números: \n");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    if (n1>n2) {
        if (n1>n3) {
            if (n1>n4) {
                max = n1;
            }
            else {
                max = n4;
            }
        }
        else {
            if (n3>n4) {
                max = n3;
            }
            else {
                max = n4;
            }
            
        }
    }
    else {
        if (n2>n3) {
            if (n2>n4) {
                max = n2;
            }
            else {
                max = n4;
            }
        }
        else {
            if (n3>n4) {
                max = n3;
            }
            else {
                max = n4;
            }
        }
    }
    printf("El máximo es: %d\n", max);
    
}
