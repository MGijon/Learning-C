//
//  main.c
//  PruebaenXcodeenC
//
//  Created by Manuel Gijón Agudo on 15/9/15.
//  Copyright (c) 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

/* EXERCICI 1 */
// Calcula la media de tres notas, es decir, números reales (racionales frecuentemente) positivos.
int main(){
    float n1, n2, n3, media;
    printf("Introduce las tres notas\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    // Me aseguro de que sean números positivos.
    if ((n1<0) || (n2<0) ||(n3<0) || (n1>10) || (n2>10) || (n3>10)) {
        printf("las notas deben ser positivas y menores de 10\n");
    }
    else {
        media = (n1 + n2+ n3)/3;
        printf("La mmedia de las 3 notas es: %f\n", media);
    }
}


