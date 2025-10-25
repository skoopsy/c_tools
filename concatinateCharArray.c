#include <stdio.h>

void concat (char result[], const char str1[], int n1, const char str2[], int n2) {

    int i, j;

    //copy str1 to result
    for (i=0; i<n1; i++) {
        result[i] = str1[i];
    }

    //copy str2 to result
    for (j=0; j<n2; j++) {
        result[n1+j] = str2[j];
    }

}

int main (void) {

    void concat (char result[],
                 const char str1[], int n1,
                 const char str2[], int n2
                 );

    const char s1[5] = {'T','e','s','t',' '};
    const char s2[7] = {'w','o','r','k','i','n','g'};

    char s3[12];
    int i;

    concat(s3, s1, 5, s2, 7);

    for (i=0;i<12; ++i) {
        printf("%c", s3[i]);
    }
    printf("\n");
    
    return 0;
}
