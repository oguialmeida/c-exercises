// Displays whether an integer is divisible by another
#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Digite um número: ");
    scanf("%i", &n1);

    printf("Digite outro número: ");
    scanf("%i", &n2);

    if (n2 == 0)
    {
        printf("Programa encerrado! Não existe divisão por 0");
    } else if (n1 % n2 != 0){
         printf("Não é divisível");
    } else {
        printf("É divisível");
    }
    
    return 0;
}