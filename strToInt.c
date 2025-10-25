#include <stdio.h>

int strToInt(const char string[]) {
    int i, intValue, result = 0;

    for (i=0; string[i]>='0' && string[i]<='9'; ++i){
        intValue = string[i] - '0'; // conversion of ASCII via subtracting ASCII value of '0' for the number
        result = result * 10 + intValue;
    }

    return result;
}

int main(void){

    int strToInt(const char string[]);

    printf("%i\n", strToInt("245"));
    printf("%i\n", strToInt("100") + 25);
    printf("%i\n", strToInt("13x5"));
}
