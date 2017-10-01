//
//  main.c
//  Tablero 4 en raya
//
//  Created by Manuel Gijón Agudo.
//  Copyright © 2015 Manuel Gijón Agudo. All rights reserved.
//

#include <stdio.h>
#define N 8

// ====================================================================================
// ====================================================================================
//
//                               TABLERO CUATRO EN RAYA 2 JUGADORES:
//
// El primer dígito se corresponderá con las columnas (a selecionar) y el siguiente con la fila (asignada).
//
//                                     0.- Casilla vacía.
//                                     1.- Casilla Jugador 1.
//                                     2.- Casilla jugador 2.
//
// ====================================================================================
// ====================================================================================

int tablero[N][N];        // Defino el tablero.
int i,j;                  // Diferentes índices que usaré recurrentemante.
int columna_seleccionada; // Columna seleccionada por el jugador.
int numero_jugador;       // En 'main' de la dará un valor dependiendo de a quién le toque tirar.
int game_over;            // 1: 'fin del juego'; 0: 'el juego continúa'.
char letreros_verticales[8]={'h','g','f','e','d','c','b','a'};  // letreros verticales.

// ===================================================================================
//------------------------------------------------------------------------------------
// Inicializo el tablero con un valor 0 (=casilla vacía) en cada casilla.
//------------------------------------------------------------------------------------

void inicializacion_valores_tablero(){
    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            tablero[i][j]=0;
        }
    }
}

// ====================================================================================
//-------------------------------------------------------------------------------------
//           La siguiente función marcará el fin del juego.
//
//    Devolverá un valor 1 para acabar el juego y un valor 0 si este continua.
//-------------------------------------------------------------------------------------

int Game_Over(int tablero[N][N],int numero_jugador){
    
    game_over = 0;
    
    //=========================
    // Casillas Vacías: (al juego acaba por la ausencia de casillas vacías).
    //---------------------------------------------------------------------------------
    
    i = 0;                                            /* Contador de columnas llenas */
    for (j=0; j<N; j++) {
        if (tablero[j][0]!=0) {
            i++;
        }
    }
    if (i==N) {
        game_over=1;
    }
    
    //=========================
    // 4 en Raya:
    //---------------------------------------------------------------------------------
    
        
        // Lo dividiré en cuatro bucles...
        
        // 1.- vertical:
    
    for (j=0; j<N; j++) {
        for (i=0;i<(N-3);i++){
            if ((tablero[j][i]==numero_jugador) && (tablero[j][i+1]==numero_jugador) && (tablero[j][i+2]==numero_jugador) && (tablero[j][i+3]==numero_jugador)) {
                    game_over=1;
            }
        }
    }
        
        // 2.- horizontal:
        
    for (i=0;i<N;i++){
        for (j=0; j<(N-3); j++) {
            if ((tablero[j][i]==numero_jugador) && (tablero[j+1][i]==numero_jugador) && (tablero[j+2][i]==numero_jugador) && (tablero[j+3][i]==numero_jugador)) {
                    game_over=1;
            }

        }
    }
        
        // 3.- Diagonal ascendente (de izquierda a derecha) :
      
    for (i=0; i<(N-3); i++) {
        for (j=3; j<N; j++) {
            if ((tablero[i][j]==numero_jugador) && (tablero[i+1][j+1]==numero_jugador) && (tablero[i+2][j+2]=numero_jugador) && (tablero[i+3][j+3]==numero_jugador)) {
                    game_over=1;
            }

        }
    }
        
        // 4.- Diagonal descendente (de izquierda a derecha) :
        
    for (i=0; i<(N-3); i++) {
        for (j=0; j<(N-3); j++) {
            if ((tablero[i][j]==numero_jugador) && (tablero[i+1][j-1]==numero_jugador) && (tablero[i+2][j-2]=numero_jugador) && (tablero[i+3][j-3]==numero_jugador)) {
                    game_over=1;
            }

        }
    }

    
    //=========================--------------------------------------------------------
    
    return game_over;
}

// ====================================================================================
//-------------------------------------------------------------------------------------
//           La siguiente función me indica si una columna está llena.
//
//    Retornará 1 si la columna está llena.
//-------------------------------------------------------------------------------------

int columna_llena(int columna_seleccionada){
    i = 0;
    if (tablero[columna_seleccionada][0]!=0) {
        i=1;
    }
    return i;
}

// ====================================================================================
//-------------------------------------------------------------------------------------
// Función que me situe la ficha en la primera casilla vacía si la columna no está llena.
//-------------------------------------------------------------------------------------

void asigno_fila(int columna_seleccionada, int numero_jugador){
    i=0,j=N-1;                  /* indicará cuando he asignado una fila al lanzamiento */
    while ((i==0) && (j>=0)) {
        if (tablero[columna_seleccionada][j]==0) {
            tablero[columna_seleccionada][j]=numero_jugador;
            i=1;
        }
        j--;
    }
}

// ====================================================================================
//-------------------------------------------------------------------------------------
// Pide al jugador que introduzca la casilla en la que desea tirar la ficha.
//-------------------------------------------------------------------------------------

void jugador(int numero_jugador){
    do {
        printf("<<<<-- JUGADOR %d -->>>>\n", numero_jugador);
        printf("Selecciona una columna entre 0 y %d:\n", (N-1));
        scanf("%d", &columna_seleccionada);
        printf("\n");
        // Mostramos un mensaje si la columna seleccionada está llena.
        if (columna_llena(columna_seleccionada)==1)
            printf("La columna está llena, por favor, selecciona otra.\n\n");
        // Necesito un mensaje que me aclare si la columna está en rango:
  /*      int aux=0;
        if ((0<columna_seleccionada)||(columna_seleccionada>N-1)){
            aux=1;
            printf("La columna seleccionada no está en rango, escoge otra.\n");
        }
    } while ((columna_llena(columna_seleccionada)==1) && (aux!=0)); */
    } while (columna_llena(columna_seleccionada)==1);
    asigno_fila(columna_seleccionada, numero_jugador);
}

// ====================================================================================
//-------------------------------------------------------------------------------------
// Impresión del tablero:
//-------------------------------------------------------------------------------------

void impresion(int tablero[N][N]){
    // imprimo columna filas y luego columnas
    for (i=0; i<N; i++) {
        // imprimo un letro antes de cada una de las filas:
        printf("%c  >  ",letreros_verticales[i]);
        for (j=0; j<N; j++) {
            printf("%d ", tablero[j][i]);
        }
        printf("\n");
    }
    // letreros para las columnas:
    printf("\n");
    printf("      ");
    for (int h=0;h<N;h++){
        printf("^ ");
    }
    printf("\n");
 /*   printf("      ");
    for (int h=0;h<N;h++){
        printf("| ");
    }
    printf("\n");  */
    printf("      ");
    for (int h=0;h<N;h++){
        printf("%d ",h);
    }
    printf("\n");
}

//======================================================================================
//
//                                Función Principal:
//
//======================================================================================

int main(){
    inicializacion_valores_tablero();
    int finalizar;                                  /* tomará el valor de 'game_over' */
    int teclado;
    do {
        do {
            jugador(1);
            impresion(tablero);
            finalizar = Game_Over(tablero, 1);
            if (finalizar==1) {                         // Mensaje de ganador  1
                printf("-------------\n\n");
                printf("Ha ganado 1!!\n\n");
                printf("-------------\n\n");
            }
            else{
                jugador(2);
                impresion(tablero);
                finalizar = Game_Over(tablero, 2);
                if (finalizar==1) {                     // Mensaje de ganador  2
                    printf("-------------\n\n");
                    printf("Ha ganado 2!!\n\n");
                    printf("-------------\n\n");
                }
            }
        } while (finalizar==0);
        printf("Si quieres jugar de nuevo introduce 1:\n");
        scanf("%d", &teclado);
        if (teclado==1) {
            inicializacion_valores_tablero();
        }
    } while (teclado==1);
    
    
}




