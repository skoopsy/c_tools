#include <stdio.h>


unsigned int shift (unsigned int value, int n) {
    if (n > 0) { // left shift
        value <<= n;
    }
    if (n < 0) { // right shift
        value >>= -n;
    }

    return value;
}

int main (void) {
    unsigned int w1 = 0177777u, w2=4;
    unsigned int shift (unsigned int value, int n);

    printf("%o\t%o\n", shift(w1, 5), w1 << 5);
    printf("%i\t%i\n", shift(w2, 2), w2 >> 2);
    
    return 0;
}
