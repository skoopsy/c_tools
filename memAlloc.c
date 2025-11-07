#include <stdlib.h>
#include <stdio.h>

int main (void) {
    int n;
    printf("input a memory size: ");
    scanf("%d\n", &n);
    int *arr = malloc(n * sizeof(int)); // size known only after input
    return 0;
}
