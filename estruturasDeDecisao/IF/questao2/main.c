#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int currentYear = 2025;
    int year;
    printf("Em que ano você nasceu? \n");
    scanf("%d", &year);

    if(currentYear - year >= 18)
        printf("É maior de idade.");
     else
        printf("Não é maior de idade");
    
    return 0;
}