//
//  main.c
//  Ejercicios
//
//  Created by Manuel Gijón Agudo on 30/9/15.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

// EXERCICI 9, b: (Bucle 'for')

int main(){
    int numero, contador;
    printf("Introduce el tope: \n\n");
    scanf("%d", &numero);
    float suma, producto, media;
    suma = 0;
    producto = 1;
    for (contador=numero; contador>0; contador--) {
        suma+=contador;
        producto*=contador;
        
    }
    media = suma/numero;
    printf("La media es:%f\nLa suma es:%f\nEl producto es:%f\n\n", media, suma, producto);
    return 0;
}