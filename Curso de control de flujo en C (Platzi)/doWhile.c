#include <stdio.h>

int n = 10;

int main(){

    do{
        printf("n = %d\n", n);
        n = n - 1;
    } while (n > 0);
    
    return 0;
}