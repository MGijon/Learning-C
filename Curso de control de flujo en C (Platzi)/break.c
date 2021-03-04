#include <stdio.h>

int option1 = 0;
int option2 = 0;

int main(){

    printf("Welcome!!\n");
    printf("Option 1 for food.\nOption 2 for drink.\n");

    switch (option1)
    {
    case 1:
        /* Food */
        printf("Food\n");

        switch (option2)
        {
        case 1:
            /* HotDog */
            printf("Hotdog selected.\n");
            //break;    // if case is 1 does not stop here, goes to the second one after this
        case 2: 
            /* Hamburguer */
            printf("Hamburguer selected.\n");
        default:
            break;
        }
        break;
    case 2:
        /* Drink */
        printf("Drink\n");

        switch (option2)
        {
        case 1:
            /* Water */
            printf("Water selected.\n");
            break;
        case 2: 
            /* Coke drink */
            printf("Coke drink selected.\n");
        default:
            break;
        }
        break;
    
    default:
        break;
    }


    /* Example with for: */
    int n = 30;
    int i;
    for (i = 0; i < n; i++){
        printf("i = %d\n", i);
        if (i == 13)
            break;    // break the loop in this instant
    }

    return 0;
}