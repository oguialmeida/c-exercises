// Store grades in an array
#include <stdio.h>

int main()
{
    int grade[5] = {0};

    for (int i = 0; i < 5; i++)
    {
        int value;
        printf("Digite a nota do aluno: ");
        scanf("%i", &value);
        grade[i] = value;
    }

    for (int j = 0; j < 5; j++)
    {
        printf("%i ", grade[j]);
    }
    printf("\n");

    return 0;
}