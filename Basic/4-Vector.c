// Displays the values of a vector
#include <stdio.h>

int main () {
    int vector[5] = {1,2,3,4,5};

    printf("Valores de um vetor: ");

    for (int i=0; i < 5; i++) {
        printf("%i ", vector[i]);
    }
    printf("\n");

    return 0;
}