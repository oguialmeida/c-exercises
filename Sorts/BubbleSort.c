#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

void bubbleSort(int v[], int num);
void imprimirVetor(int v[], int tamanho);

int vetor[TAM], vetor2[TAM], tamanho, i, aux;
static int change = 0;

int main()
{
    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    printf("\n");

    srand(time(NULL));

    printf("FORA DE ORDEM:\n\n");

    for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % 1000;
        printf("%d ", vetor[i]);

        vetor2[i] = vetor[i];
    }

    printf("\n\nORDENADOS: ");
    printf("\n\n");

    imprimirVetor(vetor2, tamanho);

    return 0;
}

void bubbleSort(int v[], int num)
{
    for (int i = 1; i <= num - 1; i++)
    {

        for (int j = 0; j < num - 1; j++)
        {

            if (v[j] > v[j + 1])
            {
                aux = v[j + 1];
                v[j + 1] = v[j];
                v[j] = aux;
                change++;
            }
        }
    }
}

void imprimirVetor(int v[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        bubbleSort(vetor2, tamanho);
        printf("%d ", vetor2[i]);
    }
    printf("\n");
    printf("\nNUMERO DE TROCAS: %d\n\n", change);
}