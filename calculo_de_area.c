#include <stdio.h>
#include <math.h>

int main()
{
    
    double n=3.14159; //declaração das variáveis
    double area,raio,raioQuadrado,total;

    scanf("%lf", &raio); // recebendo o valor do raio(%F = especificador de double)
    raioQuadrado = raio * raio; // elevando o raio ao quadrado
    total = n * raioQuadrado; // realizando o cálculo e atribuindo a variável total

    printf("A=%.4f\n", total);//4f atribui 4 casas decimais e \n pula uma linha


    return 0;
}