// Is not posible using inside a switch, but works in for, do while, while, etc.
#include <stdio.h>

int main(){
    int n = 40;
    int i;
    for (i = 0; i < n; i++){
        continue; // nothing appears, force to the execution of the next iteration
        printf("i = %d\n", i);
    }
    return 0;
}