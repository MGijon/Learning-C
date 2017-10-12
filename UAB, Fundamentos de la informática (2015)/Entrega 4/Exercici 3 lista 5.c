//
//  Created by Manuel Gijón Agudo.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

// EXERCICI 3:LISTA 5:

int main(){
    int V[50], n, contador;
    introducido=1;
    contador=0; // marcará el número de valores distintos de 0 introducidos, lo usaré para la desbiación estándar.
    do {
        printf("Introduce un númer, un cero para acabar.\n"),
        scanf("%d", &n);
        V[contador]=n;
        contador++;
    } while ((contador<50)||(introducido!=0));
    int max =0, min = 0;
    for (i=0; i<50; i++) {
        if (V[i]>max) {
            max=V[i];       // máximo
        }
        if (V[i]<min) {
            min=V[i];       // mínimo
        }
    }
    int pos=0, neg=0;
    for (i=0; i<50; i++) {
        if (V[i]>0) {
            pos++;       // positivos
        }
        if (V[i]<min) {
            neg--;       // negativos
        }
    }
    int media, suma;
    suma=0;
    for (i=0; i<contador; i++) {
        suma+=V[i];
    }
    media=suma/contador;      // media
    int desviacion_tipica, numerador;
    numerador=0;
    for (i=0; i<contador; i++) {
        numerador+=(V[i]-media)*(V[i]-media);
    }
    desviacion_tipica=(numerador)/(contador-1);  // desviación típica
    printf("Máximo: %d\nMínimo: %d\nNúmero de positivos: %d\nNúmero de negativos: %d\nMedia: %d\nDesviación típica: %d\n\n", max, min, pos, neg, media, desviacion_tipica);
}