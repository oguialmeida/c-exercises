#include <stdio.h>

int main () {
    int resp;
    printf("Você se sente bem?\n 1 para sim\n 2 para não\n");
    scanf("%i", &resp);

    printf("%i\n",resp);

    resp == 2 ? printf("Melhoras\n") : printf("Continue assim :)\n");

    return 0;
}