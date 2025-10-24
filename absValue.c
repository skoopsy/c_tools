#include <stdio.h>

float absoluteValue (float value) {

    float abs_value;

    if (value < 0) {
        abs_value = -value;
    }
    else {
        abs_value = value;
    }

    return abs_value;
}


int main (void) {

    float input = 0;
    float output = 0;

    printf("Input a value: ");   
    scanf("%f", &input);

    output = absoluteValue(input);
    printf("Output: %f \n", output);

    return 0;
}
