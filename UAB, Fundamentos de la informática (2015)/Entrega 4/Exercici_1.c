//
//  Created by Manuel Gijón Agudo.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

// EXERCICI 1:

int main(){
    int n, d, cociente;
    printf("Introduce el número a dividir:\n");
    scanf("%d", &n);
    printf("Introduce el divisior:\n");
    scanf("%d", &d);
    cociente=0;
    if (((n<0)&&(d<0))||((n>0)&&(d>0))) {
        if (n<0)
            n=(-n);
        if (d<0)
            d=(-d);
        do {
            cociente++;
            n=n-d;
        }while (n>0);
        cociente--;
        printf("El cociente es %d y el resto es %d\n\n", (cociente), n+d);
        return 0;
    }
    else {
        if (n<0)
            n=(-n);
        if (d<0)
            d=(-d);
        do {
            cociente++;
            n=n-d;
        }while (n>0);
        cociente--;
        printf("El cociente es %d y el resto es %d\n\n", (-1)*(cociente), (-1)*(n+d));
        return 0;
    }
}