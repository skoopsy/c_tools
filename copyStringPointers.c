#include <stdio.h>

void copyString( char *from, char *to) {
    while (*from != '\0'){
        *to++ = *from++; //assign then increment
    }
    *to = '\0';
}

int main (void) {
    void copyString( char *from, char *to);
    char string[] = "A string to be copied.";
    char string2[50];

    copyString(string, string2);
    printf("%s\n", string2);

    char string3[] = "So is this.";
    copyString(string3, string2);
    printf("%s\n",string3);

    return 0;
}
