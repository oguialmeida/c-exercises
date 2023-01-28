// Calculates the area and volume of various geometric shapes
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void mainMenu();
void planeMenu();
void solidMenu();
char* measureMenu(int menuType);
float planeArea(int operation);
float solidVolume(int operation);
float squareArea(float side);
float retangArea(float base, float hight);
float trapazeArea(float bigBase, float smallBase, float hight);
float triangArea(float base, float hight);
float triangEquiArea(float side);
float diamondArea(float bigDiagonal, float smallDiagonal);
float circleArea(float radius);
float pyramidVolume(float baseArea, float hight);
float coneVolume(float radius, float hight);
float cylinderVolume(float radius, float hight);
float prismVolume(float baseArea, float hight);
float cubeVolume(float baseArea, float hight);
float ballVolume(float radius);

int main()
{
    system("clear");
    bool loop = true;
    char* meansure[4];

    while (loop == true)
    {
        int menuType, operation, keepGoing;
        float result = 0;

        mainMenu();
        scanf("%i", &menuType);
        system("clear");

        meansure[4] = measureMenu(menuType);
        system("clear");

        switch (menuType)
        {
        case 1:
            planeMenu();
            scanf("%i", &operation);
            system("clear");
            result = planeArea(operation);
            break;
        case 2:
            solidMenu();
            scanf("%i", &operation);
            system("clear");
            result = solidVolume(operation);
            break;
        default:
            printf("Digite um valór válido!\n");
        }

        printf("\nResultado: %.2f %s\n", result, meansure[4]);

        printf("\nDeseja continuar?\n[1] Continuar\n[2] Sair\n");
        scanf("%i", &keepGoing);

        switch (keepGoing)
        {
        case 1:
            result = 0;
            loop = true;
            system("clear");
            break;
        case 2:
            loop = false;
            printf("\nMuito obrigado!\n");
            break;
        default:
            printf("\nVálor inválido!\n");
            loop = false;
        }
    }

    return 0;
}
void mainMenu()
{
    printf("----------------------------\n");
    printf("---CALCULADORA GEOMÉTRICA---\n");
    printf("----------------------------\n");

    printf("Para calular digite:\n [1] Para planos\n [2] Para sólidos\n");
}

void planeMenu()
{
    printf("Digite para calcular a área do: \n");
    printf(" [1] Quadrado\n [2] Retângulo\n [3] Trapézio\n [4] Triângulo\n [5] Triângulo Equilátero\n [6] Losango\n [7] Círculo\n");
}

void solidMenu()
{
    printf("Digite para calcular a área do(a): \n");
    printf(" [1] Pirâmide\n [2] Cone\n [3] Cilindro\n [4] Prisma\n [5] Cubo\n [6] Esfera\n");
}

char* measureMenu(int menuType)
{
    int measure;
    
    switch (menuType)
    {
    case 1:
        printf("Dejesa realizar a operação em:\n[1] km²\n[2] hm²\n[3] dam²\n[4] m²\n[5] dm²\n[6] cm²\n[7] mm²\n");
        scanf("%i", &measure);
        switch (measure)
        {
        case 1:
            return "km²";
            break;
        case 2:
            return "hm²";
            break;
        case 3:
            return "dam²";
            break;
        case 4:
            return "m²";
            break;
        case 5:
            return "dm²";
            break;
        case 6:
            return "cm²";
            break;
        case 7:
            return "mm²";
            break;
        default:
            printf("\nVálor inválido!\n");
        }
        break;
    case 2:
        printf("Dejesa realizar a operação em:\n[1] km³\n[2] hm³\n[3] dam³\n[4] m³\n[5] dm³\n[6] cm³\n[7] mm³\n");
        scanf("%i", &measure);
        switch (measure)
        {
        case 1:
            return "km³";
            break;
        case 2:
            return "hm³";
            break;
        case 3:
            return "dam³";
            break;
        case 4:
            return "m³";
            break;
        case 5:
            return "dm³";
            break;
        case 6:
            return "cm³";
            break;
        case 7:
            return "mm³";
            break;
        default:
            printf("\nVálor inválido!\n");
        }
        break;
    default:
        printf("\nVálor inválido!\n");
    }
}

float planeArea(int operation)
{
    float value1, value2, value3, result;
    switch (operation)
    {
    case 1:
        printf("Digite o valor do lado do quadrado: ");
        scanf("%f", &value1);

        result = squareArea(value1);
        break;
    case 2:
        printf("Digite o valor da base do retângulo: ");
        scanf("%f", &value1);

        printf("Digite o valor da altura do retângulo: ");
        scanf("%f", &value2);

        result = retangArea(value1, value2);
        break;
    case 3:
        printf("Digite a base maior do trapézio: ");
        scanf("%f", &value1);

        printf("Digite a base menor do trapézio: ");
        scanf("%f", &value2);

        printf("Digite a altura do trapézio: ");
        scanf("%f", &value3);

        result = trapazeArea(value1, value2, value3);
        break;
    case 4:
        printf("Digite o base do triângulo: ");
        scanf("%f", &value1);

        printf("Digite a altura do triângulo: ");
        scanf("%f", &value2);

        result = triangArea(value1, value2);
        break;
    case 5:
        printf("Digite o valor do lado do triângulo: ");
        scanf("%f", &value1);

        result = triangEquiArea(value1);
        break;
    case 6:
        printf("Digite o valor da diagonal maior do losango: ");
        scanf("%f", &value1);

        printf("Digite o valor da diagonal menor do losango: ");
        scanf("%f", &value2);

        result = diamondArea(value1, value2);
        break;
    case 7:
        printf("Digite o valor do raio do círculo: ");
        scanf("%f", &value1);

        result = circleArea(value1);
        break;
    default:
        printf("\nVálor inválido!\n");
    }
    return result;
}

float solidVolume(int operation)
{
    float value1, value2, result;
    switch (operation)
    {
    case 1:
        printf("Digite a área da base pirâmide: ");
        scanf("%f", &value1);

        printf("Digite a altura da pirâmide: ");
        scanf("%f", &value2);

        result = pyramidVolume(value1, value2);
        break;
    case 2:
        printf("Digite o tamanho do raio cone: ");
        scanf("%f", &value1);

        printf("Digite a altura do cone: ");
        scanf("%f", &value2);

        result = coneVolume(value1, value2);
        break;
    case 3:
        printf("Digite o raio do cilindro: ");
        scanf("%f", &value1);

        printf("Digite a altura do cilindro: ");
        scanf("%f", &value2);

        result = cylinderVolume(value1, value2);
        break;
    case 4:
        printf("Digite o raio do prisma: ");
        scanf("%f", &value1);

        printf("Digite a altura do prisma: ");
        scanf("%f", &value2);

        result = prismVolume(value1, value2);
        break;
    case 5:
        printf("Digite o raio do cubo: ");
        scanf("%f", &value1);

        printf("Digite a altura do cubo: ");
        scanf("%f", &value2);

        result = cubeVolume(value1, value2);
        break;
    case 6:
        printf("Digite o raio da esfera: ");
        scanf("%f", &value1);

        result = ballVolume(value1);
        break;
    default:
        printf("\nVálor inválido!\n");
    }
    return result;
}

float squareArea(float side)
{
    float area = side * side;

    return area;
}

float retangArea(float base, float hight)
{
    float area = base * hight;

    return area;
}

float trapazeArea(float bigBase, float smallBase, float hight)
{
    float area = ((bigBase + smallBase) * hight) / 2;

    return area;
}

float triangArea(float base, float hight)
{
    float area = (base * hight) / 2;

    return area;
}

float triangEquiArea(float side)
{
    float area = ((side * side) * sqrt(3) / 4);

    return area;
}

float diamondArea(float bigDiagonal, float smallDiagonal)
{
    float area = (bigDiagonal * smallDiagonal) / 2;

    return area;
}

float circleArea(float radius)
{
    float pi = 3.14159265359;
    float area = pi * (radius * radius);

    return area;
}

float pyramidVolume(float baseArea, float hight)
{
    float volume = (baseArea * hight) / 3;

    return volume;
}

float coneVolume(float radius, float hight)
{
    float pi = 3.14159265359;
    float volume = (pi * (radius * radius) * hight) / 3;

    return volume;
}

float cylinderVolume(float radius, float hight)
{
    float pi = 3.14159265359;
    float volume = (pi * (radius * radius) * hight);

    return volume;
}

float prismVolume(float baseArea, float hight)
{
    float volume = baseArea * hight;

    return volume;
}

float cubeVolume(float baseArea, float hight)
{
    float volume = baseArea * hight;

    return volume;
}

float ballVolume(float radius)
{
    float pi = 3.14159265359;
    float volume = (4 / 3) * pi * (radius * radius * radius);

    return volume;
}
