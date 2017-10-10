//
//  main.c
//  Ejercicios
//
//  Created by Manuel Gijón Agudo on 30/9/15.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

// Exercici 5, d:
// Incluiré un menú para seleccionar el apartado a ejecutar.
int main() {
    int selector;
    int n, p, nn, pp, any; // Defino ahora todas las variables del programa.
    // Creo un menú que se imprimirá por pantalla.
    printf("Introduce:\n\n-1 Para el apartado (a)\n-2 Para el apartado (b)\n-3 Para el apartado (c)\n\n");
    scanf("%d", &selector);
    switch (selector) {
        case 1:
            // APARTADO (a):
           
            printf("Introduce el número del mes:\n");
            scanf("%d", &n);
            if (n == 2) {
                p = 28;   // número de días, creo una variable porque más adelante puede hacerme falta.
                printf("tiene %d días.", p);
            }
            else {
                if ((n == 4)||(n == 6)||(n == 9)||(n == 11)){
                    p = 30;
                    printf("tiene %d días.\n", p);
                }
                else {
                    p = 31;
                    printf("tiene %d días.\n", p);
                }
            }
            return 0;


            break;
        case 2:
            // APARTADO (b):
            
            printf("Introduce el número del mes y el número de días:\n");
            scanf("%d %d", &nn, &pp);
            if (nn == 2) {
                if (pp == 28) {
                    printf("Correcto.\n");
                }
                else
                    printf("Incorrecto.\n");
            }
            else {
                if ((nn == 4)||(nn == 6)||(nn == 9)||(nn == 11)){
                    if (pp == 30) {
                        printf("Correcto.\n");
                    }
                    else
                        printf("Incorrecto.\n");
                    
                }
                else {
                    if (pp == 31) {
                        printf("Correcto.\n");
                    }
                    else
                        printf("Incorrecto.\n");
                }
            }
            return 0;

            break;
        case 3:
            // APARTADO (c):
      
            printf("Introduce el año:\n\n");
            scanf("%d", &any);
            if (((any%4==0) && (any%100!=0)) || ((any%100==0) && (any%400==0))) {
                printf("Febrero tiene 29 días.\n");
            }
            else
                printf("Febrero tiene 28 días.\n");
            return 0;

            break;
        default:
            printf("Introduce una opción correcta.");
            break;
    }
}

