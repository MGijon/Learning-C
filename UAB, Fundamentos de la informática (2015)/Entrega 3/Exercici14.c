//
//  main.c
//  Ejercicios
//
//  Created by Manuel Gijón Agudo on 30/9/15.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

// EXERCICI 14:

int main(){
    int numero, primo, contador;
    printf("Intruduce el número:\n\n");
    scanf("%d", &numero);
    primo=0;
    contador = numero-1;
    for (contador; contador>1; contador--) {
        if (numero%contador==0) {
            primo++;
        }
    }
    
    if (primo!=0) {
        printf("El número no es primo.\n");
        return 0;
    }
    else {
        printf("El número es primo.\n");
        return 0;
    }
}
