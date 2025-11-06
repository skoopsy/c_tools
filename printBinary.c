#include <stdio.h>

void printBinary(int num) {
    for (int i = sizeof(int) * 8 - 1; i>=0 ; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 4 ==0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int number;
    printf("Input a decimal number to represent in binary: ");
    scanf("%i", &number);

    printf("\nBinary representatiton: ");
    printBinary(number);

    // shift right by 5
    int num2 = number << 5;
    printf("Shifted left by 5     : ");
    printBinary(num2);

    // insert a 4 bit message into the bi field:
    int msg = 11;
    // bit_mask to make sure all zeros then insder int 11 starting at bit 20:
    // 1. Current number and bitwise & it with 0s
    // 1. ~ ones compliment - flip all bitsx
    //
    number = (number & ~(0xff << 20) | (11 & 0xff) << 20);
    printf("msg (1011) inserted   : ");
    printBinary(number);

    n = (packed_data >> 18) & 0xff;

    return 0;
}


