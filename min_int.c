#include <stdio.h>

int minimum (int values[], int numOfElements) {
    int minValue, i;
    
    // set the min value to first one of the array
    minValue = values[0];

    // check if another value is lower
    for (i=1; i<numOfElements; ++i) {
        if (values[i] < minValue ) {
            minValue = values[i];
        }
    }
    
    return minValue;
}

int main (void) {

    int scores[10], i, minScore;

    printf("Enter 10 numbers: \n");

    for ( i=0; i<10; ++i ) {
        
        scanf ("%i", &scores[i]);
    }

    minScore = minimum(scores, 10);
    printf ("\nMinimum value: %i\n", minScore);

    return 0;
}
