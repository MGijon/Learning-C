#include <stdio.h>
#define PAPERCOST 3

const int PRICEHOTDOG = 100; // tip: 100l -> indicates long, 100u -> indicates unsigned
const float TOTALBILL = 100.05;
const char NEWLINE = '\n';

int main(){

    float paperCost;
    paperCost = PAPERCOST * 10;

    printf("%d", PRICEHOTDOG);
    printf("%c", NEWLINE);
    printf("%f", TOTALBILL);
    printf("%c", NEWLINE);
    printf("%f", paperCost);
}