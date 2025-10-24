#include <stdio.h>

float absoluteValue (float value) {
    if ( value < 0 ) {
        value = - value;
    }

    return value;
}

float squareRoot (float value) {
    /* Newton Raphson method to approximate square root */
    const float epsilon = 0.00001;
    float guess = 1.0;

    while ( absoluteValue (guess * guess - value) > epsilon )
        guess = ( value / guess + guess ) / 2.0;

    return guess;
}

int main (void) {
    
    printf("squareRoot(2.0) = %f\n", squareRoot(2.0));

    return 0;
}
