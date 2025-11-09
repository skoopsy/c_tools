#include <stdlib.h>
#include <stddef.h> // size_t
#include <stdio.h>

// Vector Structure
typedef struct {
    size_t n;       // Number of elements
    double *data;   // pointer to n doubles
} vec_t;

// Vector functions
vec_t* vec_alloc_ptr(size_t n) {
    /* Allocate memory to n and data for a pointer to datatype vec_t */

    // Alloc memory for vector structure
    vec_t *v = (vec_t*)malloc(sizeof(vec_t));
    // Check pointer is set
    if (v == NULL) {
        fprintf(stderr, "vec_alloc_ptr error: Failed to alloc for vec_t struct\n");
        return NULL;
    }

    // Alloc memory vec_t data
    v->data = (double*)calloc(n, sizeof(double));

    // Check for runtime memory alloc failure
    if(v->data == NULL) {
        fprintf(stderr, "vec_alloc_ptr error: Failed to allocate memory for %zu elements\n", n);
        free(v); // Cleanup partially initialised
        return NULL;
    }

    // Alloc number of elements to struct
    v->n = n;

    return v;
}

void vec_print(const vec_t *v) {
    if (v == NULL || v->data == NULL) {
        fprintf(stderr, "vec_print error: Cannot print a NULL/Uninitialised vector");
        return;
    }

    printf("Vector (size %zu):\n", v->n);
    for (size_t i=0; i< v->n; ++i) {
        printf(" [%zu]: %.4f\n", i, v-> data[i]);
    }
}

int main(void) {
   
    // init vec
    vec_t *some_vector_ptr = vec_alloc_ptr(100);
    if (some_vector_ptr == NULL) {
        exit(EXIT_FAILURE);
    }

    // Use vec_ptr
    vec_print(some_vector_ptr);

    // cleanup
    free(some_vector_ptr->data);
    free(some_vector_ptr);

    return 0;
}
