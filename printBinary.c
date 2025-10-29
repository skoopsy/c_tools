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

    printf("\nBinary representaiton: ");
    printBinary(number);
    return 0;
}
