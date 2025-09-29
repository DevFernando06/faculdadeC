#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int base, height;
    printf("Qual o tamanho da base do seu objeto? \n");
    scanf("%d", &base);
    
    printf("Qual o tamanho da altura do seu objeto? \n");
    scanf("%d", &height);

    if(base == height)
        printf("É um quadrado.");
     else
        printf("É um triângulo.");

    return 0;
}