#include <stdio.h>

int main(){
    printf("Hello world");
    return 0;
}

/*
# ================ #
# BASIC DATA TYPES #
# ================ #
    (a) Integeers
        - char               - 1 Byte  - from -128 to 127
        - unsigned char      - 1 Byte  - 

        - int                - 4 Bytes - from -2,147,483,648 to 2,147,483,648
        - unsigned int       - 4 Bytes - from 0 to 4,294,967,295

        - short              - 2 Bytes - from -32,768 to 32,768
        - unsigned short     - 2 Bytes - from 0 to 65,535

        - long               - 8 Bytes - from -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
        - unsigned long      - 8 Bytes - from 0 to 18,446,744,073,709,551,615
    
    (b) Floating
        - float              - 4 Bytes - from 1.2E-38 to 3.4E+38 (6 decimal places)
        - double             - 8 Bytes - from 2.3E-308 to 1.7E+308 (15 decimal places)
        - long double        - 10 Bytes - from 3.4E-4932 to 1.1E+4932 (19 decimal places)

    (c) Void: especifies that there is no available value. 3 Scenarios:
        - Function that returns void (void function())
        - Function that takes void as an argument (int rand(void)).
        - Pointers that point to a data whose type is not important.

    (d) ENUM
        - go to enums.c file
*/