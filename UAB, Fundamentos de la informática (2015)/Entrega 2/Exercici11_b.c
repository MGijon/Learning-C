//
//  main.c
//  Ejercicios
//
//  Created by Manuel Gijón Agudo on 30/9/15.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>
#define FINAL_SECUENCIA 0

// Exercici 11, b:
int main(){
    int numero,impar, contador;
    impar = 0;
    contador = 0;
    do {
        printf("Introduce un número... un 0 para acabar...");
        scanf("%d", &numero);
        contador++;
        if (numero%2!=0) {
            impar++;
        }
    } while (numero!=FINAL_SECUENCIA);
    // Imprimo si hay impares o no.
    if (impar!=0) {
        printf("En total hay %d impares de un total de %d números introducidos.\n", impar, contador);
    }
    else
        printf("No hay impares en la secuencia.\n");
    
}
