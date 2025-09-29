#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int m;
    printf("Digite dois números inteiros: \n");
    scanf("%d", &m);

    switch (m)
    {
        case 4:
        printf("30 dias");
        case 6:
        case 9:
        case 11:            
        break;
        
        case 1:
        printf("31 dias");
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        break;

        case 2:
        printf("28 dias");
        break;

        default:
        printf
        ("Mês inválido.");
    }

    return 0;
}
