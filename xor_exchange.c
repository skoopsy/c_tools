#include <stdio.h>

int main (void) {

    int i1 = 37;
    int i2 = 22;

    printf("i1 = %i, i2 = %i\n", i1, i2);

    i1 ^= i2;
    i2 ^= i1;

    printf("i1 = %i, i2 = %i\n", i1, i2);

    i1 ^= i2;

    printf("i1 = %i, i2 = %i\n", i1, i2);

    return 0;
}
