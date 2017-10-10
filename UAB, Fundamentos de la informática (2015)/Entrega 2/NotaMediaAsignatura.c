//
//  main.c
//  Ejercicios
//
//  Created by Manuel Gijón Agudo on 30/9/15.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

// NOTA MEDIA DE LA ASIGNATURA:

int main(){
    float AC, PR, AI, EP, EFP, Nota_teoria, Nota_practicas;
    printf("Introduce las notas del bloque teórico:\n\n1.-Evaluacón continua.\n");
    scanf("%f\n", &AC);
    printf("2.-Práctica.\n");
    scanf("%f\n", &PR);
    printf("3.-Evaluación individual.\n");
    scanf("%f\n\n", &AI);
    printf("Introduce ahora las notas del bloque práctico:\n\n4.-Entrega parcial.\n");
    scanf("%f\n", &EP);
    printf("5.-Entrega final.\n");
    scanf("%f\n", &EFP);
    if ((AI<5) || (PR<5) || (EFP<5)) {
        printf("Suspenso.\n");
    }
    else {
        Nota_teoria = 0.1*AC + 0.3*PR + 0.6*AI;
        Nota_practicas = 0.3*EP + 0.7*EFP;
        printf("Las notas son:\n\n1.-Notas teoría:%f\n2.-Notas prácticas:%f\n.-Final:%f", Nota_teoria, Nota_practicas, (Nota_practicas+Nota_teoria)/2);
    };
    return 0;
}