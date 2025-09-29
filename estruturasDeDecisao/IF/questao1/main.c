#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int n, n2;
    printf("Digite dois números inteiros: \n");
    scanf("%d", &n);
    scanf("%d", &n2);

    if(n > n2){
        printf("Primeiro valor é maior que o segundo");
    } else if(n < n2){
        printf("Primeiro valor é menor que o segundo");
    } else{
        printf("O primeiro valor é igual ao segundo");
    }

    return 0;
}
