#include <stdio.h>

// Subtracting a pointer later in an array from an earier pointer 
// in the same array results in the number of pointers between them.
// Special case where the variable name for a array is actuall
// a pointer to the first address in the array so instead of 
// &string[0] you can just write string.

int stringLength (const char *string) {
    // point to the address first index in the char array
    const char *pChar = string;
    
    while (*pChar != '\0'){
        ++pChar;
    }
    // Pointer subtraction results in sum of pointers between them
    return pChar - string; 
}

int main (void) {
    
    int stringLength (const char *string);

    printf("%i\n", stringLength("How long is this string."));
    printf("%i\n", stringLength("This one?"));
    printf("%i\n", stringLength(""));

    return 0;
}
