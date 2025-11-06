#include <stdio.h>
#include <stdint.h>

#define FLAG_0 0b00000001
#define FLAG_1 0b00000010
#define FLAG_2 0b00000100
#define FLAG_3 0b00001000
#define FLAG_4 0b00010000
#define FLAG_5 0b00100000
#define FLAG_6 0b01000000
#define FLAG_7 0b10000000

void printBinary(uint8_t aRegister) {
    for (int i = 7; i>=0; i--) {
        printf("%d", (aRegister >> i) & 1);
    }
    printf("\n");
}

void checkFlag(int bit, uint8_t flagRegister) {
    if ((flagRegister >> bit & 1) == 0) {
        printf("Flag: %i - disabled\n", flag);
    }
    else {
        printf("Flag: %i - enabled\n", flag);
    }
}

int main (void) {

    uint8_t flags = 54; // 00110110
                        
    printf("Flags: ");
    printBinary(flags);
    for (int i=0; i<sizeof(flags)*8; i++) {
        checkFlag(i, flags);
    }

    // Enable FLAG_0
    printf("\nEnabling flag 0...\n");
    flags = flags | FLAG_0;

    printf("Flags: ");
    printBinary(flags);
    for (int i=0; i<sizeof(flags)*8; i++) {
        checkFlag(i, flags);
    }

    // Disable FLAG_3
    printf("\nDisabling flag 3...\n");
    flags = flags & ~FLAG_3;

    printf("Flags: ");
    printBinary(flags);
    for (int i=0; i<sizeof(flags)*8; i++) {
        checkFlag(i, flags);
    }




    return 0;
}
