#include <stdio.h>

int main()
{
    int num, cipher;

    printf("------------------------------\n");
    printf("-----INVERTENDO UM NÚMERO-----\n");
    printf("------------------------------\n");

    printf("\nDigite um numero inteiro com mais de uma casa: ");
    scanf("%i", &num);

    if (num >= 0)
    {
        do
        {
            cipher = num % 10;
            printf("%i", cipher);

            num /= 10;
        } while (num != 0);
    }
    else if (num < 1)
    {
        num = num * -1;
        printf("-");
        do
        {
            cipher = num % 10;
            printf("%i", cipher);

            num /= 10;
        } while (num != 0);
    }

    printf("\n");

    return 0;
}