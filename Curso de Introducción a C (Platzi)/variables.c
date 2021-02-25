# include <stdio.h>

// Variable DECLARATIONS (OBS: we can use the syntaxis ´extern´ to bring variables from other files)
int a, b, c;
float f, g, h;

extern int x, y, z;

int main(){

    // Variable INIZIALIZATION
    a = 1;
    b = 34;

    int x, y, z;
    x = 2;

    c = a + b;
    g = x * b;

    printf("Value of the sum is %d", c);

    printf("\n");
    printf("Value of the second operation is is %f", g);

    return 0;
}