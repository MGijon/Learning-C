#include <stdio.h>

int option1 = 0;  // 0 food and 1 drinks
int option2 = 0;  // from 0 to 3

int main(){
    /* This program generates menus of options. */

    // Food
    if (option1 == 0){
        printf("Welcome!!\nOption 1 is equal to 0.\n");
        // choose the subtype
        if (option2 == 0)
            printf("Option 2 is equal to 0.\n");
        else if (option2 == 1)
            printf("Option 2 is equal to 1.\n");
        else if (option2 == 2)
            printf("Option 2 is equal to 2.\n");
        else if (option2 == 3)
            printf("Option 2 is equal to 3.\n");
        else
            printf("Option 2 invalid. Please select and integer from 0 to 3.\n");

    }

    // Drinks
    else if (option1 == 1){
        printf("Welcome!!\n Option 1 is equal to 0.\n");
        // choose the subtype
        if (option2 == 0)
            printf("Option 2 is equal to 0.\n");
        else if (option2 == 1)
            printf("Option 2 is equal to 1.\n");
        else if (option2 == 2)
            printf("Option 2 is equal to 2.\n");
        else if (option2 == 3)
            printf("Option 2 is equal to 3.\n");
        else
            printf("Option 2 invalid. Please select and integer from 0 to 3.\n");
    }

    else 
        printf("The option 1 > 1 is not available. Please select 0 or 1.\n");

    return 0;
}