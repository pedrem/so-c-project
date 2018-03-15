#include "ex1.2.h"


void multiplicarVetor(int vetor[], float valor)
{
    float aux;

    for(int i = 0; i < 10; i++)
    {
        aux = vetor[i] * valor;
        printf("O valor da posição %d é %.2f\n", i, aux);
    }
}

void main()
{
    int valores[10];
    char aux[10];

    for(int i = 0; i < 10; i++)
    {
        printf("Introduza um inteiro: ");
        fgets(aux, 10, stdin);
        valores[i] = atoi(aux);
    }

    multiplicarVetor(valores, 2.5f);

}



