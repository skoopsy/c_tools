#include <stdio.h>

int gcd (int u, int v) {
    /* Find greatest common divisor of two non-nagative integers
     * and return the result */
    int temp;

    while ( v != 0 ) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

int main (void) {
    int result = gcd ( 150, 35 );
    printf ("The GCD of 150 & 35 is %i\n", result);

    return 0;
}
