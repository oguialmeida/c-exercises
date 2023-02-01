#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

void showArray(int array[], int arraySize);
int bubbleSort(int array[], int arraySize);

int main()
{
    int arraySize, array[TAM], clone[TAM];

    printf("\nDigite o tamanho do vetor: ");
    scanf("%i", &arraySize);

    printf("\nVetor fora de ordem: ");

    srand(time(NULL));

    for (int i = 0; i < arraySize; i++)
    {
        array[i] = rand() % 1000;
        printf("%i ", array[i]);

        clone[i] = array[i];
    }

    printf("\n\nVetor ordenado: ");
    showArray(clone, arraySize);

    return 0;
}

int bubbleSort(int array[], int arraySize)
{
    static int change = 0;
    int i, j, aux;

    for (i = 0; i < arraySize; i++)
    {
        for (j = i + 1; j < arraySize; j++)
        {
            if (array[i] > array[j])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
                change++;
            }
        }
    }

    return change;
}

void showArray(int array[], int arraySize)
{
    int change;
    for (int i = 0; i < arraySize; i++)
    {
        change = bubbleSort(array, arraySize);
        printf("%i ", array[i]);
    }
    printf("\n\nTrocas realizadas: %i\n\n", change);
}
