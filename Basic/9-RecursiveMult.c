// Uses recursion to perform a multiplication
#include <stdio.h>

int main()
{
    int num1, num2, result;

    printf("Digite um numero inteiro: ");
    scanf("%i", &num1);

    printf("Digite outro número inteiro: ");
    scanf("%i", &num2);

    result = recursiveMult(num1, num2);

    printf("%i\n", result);
}

int recursiveMult(int num1, int num2)
{
    if (num1 == 0 || num2 == 0)
    {
        return 0;
    }
    else if (num2 == 1)
    {
        return num1;
    }
    else
    {
        return (num1 + recursiveMult(num1, num2 - 1));
    }
}
