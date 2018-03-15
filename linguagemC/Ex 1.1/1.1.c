#include "ex1.1.h"


void inverterVetor(int vetor[])
{

    for(int i = 9; i >= 0; i--)
    {
        printf("O valor da posição %d é %d\n", i, vetor[i]);
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

    inverterVetor(valores);

}



