#include <stdio.h>>

main()
{
    float n1, n2, s;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    s = (n1 + n2) / 2;

    printf("Média: %f\n", s);

    return 0;
}
