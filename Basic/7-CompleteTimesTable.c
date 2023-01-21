#include <stdio.h>

int main () {

    for (int i = 1; i <= 10 ; i++) {
        printf("\n**Taboada do %i**\n", i);

        for (int j = 1; j <= 10; j++) {
            int result = i * j;
            printf("%i x %i = %i\n", i, j, result);
        }
    }
}