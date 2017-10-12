//
//  Created by Manuel Gijón Agudo.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

// EXERCICI 3:

int main(){
    int n_0, n_1, nn, contador, auxiliar;
    n_0 = 0;
    n_1 = 1;
    contador = 0;
    printf("Intruduce el término a obtener:\n\n");
    scanf("%d", &nn);
    if (nn<0) {
        printf("Has cometido un error.\n\n");
        return 0;
    }
    else {
        for (contador=0; contador<=nn-2; contador++) {
            auxiliar = n_0;
            n_0  =n_1;
            n_1= auxiliar + n_0;
        }
        printf("El resultado es: %d\n\n", n_1);
    }
}