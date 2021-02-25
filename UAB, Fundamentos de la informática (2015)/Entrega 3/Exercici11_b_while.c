//
//  main.c
//  Ejercicios
//
//  Created by Manuel Gijón Agudo on 30/9/15.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

// EXERCICI 11, b: (Bucle 'while')

int main(){
    int numero, contador_pares;
    contador_pares = 0;
    numero = 1;
    while (numero!=0) {
        printf("Introduce un nuevo número de la secuencia:\n(se sale intruducieno un 0)\n");
        scanf("%d", &numero);
        if (numero%2==0) {
            contador_pares++;
        }
    }
    if (contador_pares==0) {
        printf("En la secuencia no hay pares.\n\n");
    }
    else
        printf("En la secuencia hay al menos un impar.\n\n");
    return 0;
}