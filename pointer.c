#include <stdio.h>

int main (void) {
    int count = 10, x; // Integer variable with a value of 10
    int *int_pointer; // pointer to an integer

    int_pointer = &count; // Int_pointer stores the address of count
    x = *int_pointer; // * dereferences the pointer, meaning: get the value at the address stored in int_pointer

    printf("Value of count: %d\n", count);
    printf("Value of x: %d\n", x);
    printf("Address of count (&count): %p\n", (void*)&count);
    printf("Address of x (&x): %p\n", (void*)&x);
    printf("Address stored in (value in) int_pointer: %p\n", (void*)int_pointer);
    printf("Value pointed to by int_pointer (*int_pointer): %d\n",*int_pointer);
    printf("Address of the pointer variable itself (&int_pointer): %p\n\n", (void*)&int_pointer);

    // Change value through a pointer
    *int_pointer = 20; //dereferenced pointer, and so the value, being assigned to 20
    
    printf("After modifying *int_pointer = 20:\n");
    printf("  count = %d  (changed!)\n", count);
    printf("  *int_pointer = %d\n", *int_pointer);
    printf("  x = %d  (unchanged, because it's a copy)\n\n", x);
   
    // Change vlaue directly
    count = 30;


    printf("After modifying count = 30:\n");
    printf("  count = %d\n", count);
    printf("  *int_pointer = %d  (reflects new value)\n", *int_pointer);
    printf("  int_pointer = %p  (still same address)\n\n", (void*)int_pointer);

    // Show address of the pointer itself
    printf("Address of the pointer variable (&int_pointer): %p\n", (void*)&int_pointer);
    return 0;
}
