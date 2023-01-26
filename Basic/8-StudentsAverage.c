#include <stdio.h>

int main()
{
    system("clear");

    float grades[4][4] = {0};
    float studentsAverage[4] = {0};
    float average = 0;

    for (int i = 0; i < 4; i++)
    {
        printf("Insira 4 notas:\n");
        for (int j = 0; j < 4; j++)
        {
            scanf("%f", &grades[i][j]);
            average += grades[i][j];
        }
        studentsAverage[i] = average / 4;
        average = 0;
    }
    for (int k = 0; k < 4; k++)
    {
        printf("\nMédia dos aluno %i é %.2f\n", k + 1, studentsAverage[k]);
    }

    return 0;
}