#include <stdio.h>
#include <math.h>

unsigned countBits(unsigned long long number) {
    // Log fucntion in base 2
    return (int)log2(number)+1;
}

int main() {
    unsigned long long num = 0;
    printf("Input a number to count total bits: ");
    scanf("%lld", &num);

    printf("Bits: %d (Warning; if the input is larger than 64bits, it won't count higher)\n", countBits(num));
    return 0;
}

