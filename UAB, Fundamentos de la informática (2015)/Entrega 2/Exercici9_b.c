//
//  main.c
//  Ejercicios
//
//  Created by Manuel Gijón Agudo on 30/9/15.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

// Exercici 9, b:
int main(){
    int n, m, suma, producto;
    printf("Introduce el número tope.\n\n");
    scanf("%d", &n);
    m = n;
    suma = 0;
    producto = 1;
    do {
        suma += m;
        producto *= m;
        m--;
    }while (m>0);
    printf("La suma es: %d, el procucto es: %d, la media es:%d\n", suma, producto, (suma/n));
    return 0;
}
