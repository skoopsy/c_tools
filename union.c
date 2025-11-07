#include <stdio.h>

union mixed {
    char c;
    float f;
    int i;
} x;

enum symbolType {INTEGER, FLOATING, CHARACTER};
const int kTableEntries = 2;

struct {
    char *name;
    enum symbolType type;
    union {
        int i;
        float f;
        char c;
    } data;
} table [kTableEntries];



int main (void) {

    // Play with union mixed x
    x.c = 'K';

    printf("%c\n", x.c);
    
    union mixed * pX = &x;

    printf("%p\n", pX);
    printf("%c\n", pX->c);
    printf("%i\n", pX->c);
        
    // Play with struct table
    table[0].data.c = '#';
    table[0].type = CHARACTER;
    table[1].data.i = 3;
    table[1].type = INTEGER;


    for (int j = 0; j<kTableEntries; ++j) {
        printf("%s ", table[j].name);
        switch ( table[j].type ) {
            case INTEGER:
                printf ("%i\n", table[j].data.i);
                break;
            case FLOATING:
                printf ("%f\n", table[j].data.f);
                break;
            case CHARACTER:
                printf ("%c\n", table[j].data.c);
                break;
            default:
               printf ("Unknown type (%i), element %i\n", table[j].type, j);
               break;
        }
    }

    return 0;
}

