/* Enum explanation and notes. */
# include <stdio.h>

/* Declare the enum */
enum weekDays {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

/* Here we declare another enum and create the instance of the enum called deck (called card). */
enum deck {
    club = 0,
    diamons = 1,
    hearts = 2,
    spades = 3
} card ;

int main(){
    enum weekDays today;  /* Create a variable of type "weekDays" */

    today = Wednesday;
    printf("Day %d", today+1);

    printf("\n");
    
    card = hearts;
    printf("Card %d", card);
    return 0;
}