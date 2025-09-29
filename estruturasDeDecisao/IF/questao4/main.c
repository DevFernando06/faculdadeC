#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n, n2;
    printf("Qual o tamanho da base do seu objeto? \n");
    scanf("%d", &n);
    scanf("%d", &n2);

    if(n < 0) 
        n = -n;
    if(n2 < 0)
        n2 = -n2;

    if(n > n2)
        printf("%d é maior que %d", n, n2);
    else 
        printf("%d é maior que %d", n2, n);   

    return 0;
}