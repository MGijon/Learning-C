//
//  Created by Manuel Gijón Agudo.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>

// EXERCICI 6:

int punto(int &x, int &y, int &m){
    int V[3];
    switch (m) {
        case 1:
            V[0] = x+1;
            V[1] = y;
            V[2] = 1;
            return V;
            break;
        case 2:
            V[0] = x;
            V[1] = y+1;
            V[2] = 1;
            return V;
            break;
        case 3:
            V[0] = x-1;
            V[1] = y;
            V[2] = 1;
            return V;
            break;
        case 4:
            V[0] = x;
            V[1] = y-1;
            V[2] = 1;
            return V;
            break;
        default:
            V[0] = x;
            V[1] = y;
            V[2] = 1;
            return V;
            break;
    }
};

int main(){
    int x,y,m;
    int V[3];
    printf("Introduce las coordenadas del punto y la dirección del movimiento:\n1.-Derecha\n2.-Arriba\n3.-Izquierda\n4.-Abajo\n");
    scanf("%d %d %d", &x, &y, &m);
    V[3]=punto(x,y,m);
    if (V[2]==1) {
        printf("La función no ha podido calcular el movimiento del punto.\n");
        return 0;
    }
    else{
        printf("Las nuevas coordenadas son (%d,%d).\n\n", V[0], V[1]);
        return 0;
    }
}