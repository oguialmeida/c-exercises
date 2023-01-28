// Displays the area of a rectangle
#include <stdio.h>

float calculateRetang (float base, float hight);

int main () {
    float retangBase, retangHight, result;

    system("clear");
    printf("Digite a área do retangulo: ");
    scanf("%f", &retangBase);

    system("clear");
    printf("Digite a altura do retangulo: ");
    scanf("%f", &retangHight);

    result = calculateRetang(retangBase, retangHight);

    printf("A área do retangulo é: %.2f m²\n", result);

    return 0;
}

float calculateRetang (float base, float hight) {
    float area = base * hight;

    return area;
}