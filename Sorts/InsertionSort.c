#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 1000

void sort(int *uai, int size);
void imprimirVetor(int vetor2[], int num);

int tamanho;
int vetor[TAM], vetor2[TAM];
int x, y, i, j, aux;
static int ntrocas = 0;

int main()
{
  printf("VALORES ALEATORIOS:\n\n");
  printf("Digite o valor de numeros aleatorios desejado: ");
  scanf("%d", &tamanho);
  printf("\n");

  srand(time(NULL));

  for (i = 0; i < tamanho; i++)
  {
    vetor[i] = rand() % 1000;

    printf("%d ", vetor[i]);

    vetor2[i] = vetor[i];
  }

  printf("\n\nORDENADOS: ");
  printf("\n\n");

  imprimirVetor(vetor2, tamanho);

  getch();
  return 0;
}

void imprimirVetor(int vetor2[], int tamanho)
{

  for (int i = 0; i < tamanho; i++)
  {
    sort(vetor2, tamanho);
    printf("%d ", vetor2[i]);
  }
  printf("\n\n");
  printf("\nNUMERO DE TROCAS: %d", ntrocas);
}

void sort(int *uai, int size)
{

  for (x = 1; x < size; x++)
  {
    aux = uai[x];

    for (y = x - 1; y >= 0 && uai[y] > aux; y--)
    {
      uai[y + 1] = uai[y];

      ntrocas++;
    }
    uai[y + 1] = aux;
  }
}
