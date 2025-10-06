#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int number;

    printf("Digite um numero: ");
    scanf("%d", number);

    for(int i = 1; i <= number; i++){
        if(i % 2 == 1)
            printf("%d\n", i);
    }
    
    return 0;
}