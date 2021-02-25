//
//  main.c
//  Ejercicios
//
//  Created by Manuel Gijón Agudo on 30/9/15.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

// EXERCICI 13: 

int main(){
    int nota, suspenso, aprobado, notable, excelente, valor_incorrecto;
    suspenso = 0;
    aprobado = 0;
    notable = 0;
    excelente = 0;
    valor_incorrecto = 1;
    nota = 1;
    while ((nota!=-1) && (valor_incorrecto!=0)) {
        printf("Introduce una nueva nota:\n(se sale intruducieno un -1)\n");
        scanf("%d", &nota);
        if (nota<5)
            suspenso++;
        else {
            if (nota<7)
                aprobado++;
            else {
                if (nota<9)
                    notable++;
                else {
                    if ((nota<10) && (nota>0))
                        excelente++;
                    else
                        valor_incorrecto=0;
                }
            }
         }
    }
        if (valor_incorrecto!=0) {
            printf("Suspensos:%d\nAprobados:%d\nNotables:%d\nExcelentes:%d\n\n", suspenso, aprobado, notable, excelente);
            return 0;
        }
        else {
            printf("Alguno de los valores era incorrecto.\n\n");
            return 0;
        }
    
    }
