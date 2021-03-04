// OBS: good practice: if a block contains only one statement do not write {}.
// && == and
// || == or 

#include <stdio.h>

int n = -1;

int main(){
    
    if (n > 10 && n < 20)
        printf("The number n is greater than 10 and smaller than 20.\n");
    else if (n == 10)
        printf("The number n is equal to 10.\n");
    else if (n > 20) 
        printf("The number n is greater than 20.\n");
    else if (n < 10 && n >= 0)
        printf("The number n is smaller than 10 (and positive).\n");
    else if (n < 0)
        printf("The number is not positive.\n");
    else 
        printf("There is not information about the number n.\n");

    return 0;
}
