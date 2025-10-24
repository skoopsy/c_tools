#include <stdio.h>

int main (void) {

    long long factorial( long long n);

    long long input = 0;
    printf("Input a number to factorial: ");
    scanf("%lld", &input);

    if (input < 0) {
        printf("Factorial is undefined for < 0.\n");
        return 1;
    }

    if (input > 20) {
        printf("Warning: 64-bit overflow above 20!)\n");
    }

    long long output = factorial(input);
    printf("%lld! = %lld\n", input, output);

    return 0;
}

long long factorial( long long n ) {
        long long output = 1;

        for (long long i=1; i<=n; ++i){
            output *= i;
            printf("%lld - %lld\n", i, output);
        }
        
        return output;
}

