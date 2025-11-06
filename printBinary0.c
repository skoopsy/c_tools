#include <stdio.h>
#include <stdint.h> // reveals the uint8_t data type for our 8bit register

void printBinary(uint8_t flagRegister) {
    for (int i = 7; i>=0; i--) {
        printf("%d", (flagRegister >> i) & 1);
    }
    printf("\n");
}
int main (void) {
    uint8_t flagRegister = 54;
    printBinary(flagRegister);

    return 0;
}
