#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int numberDigit, BiggestNumber = 0;
    
    for(int i = 1; i <= 10; i++){
        printf("%d - Digite um número: ", i);
        scanf("%d", &numberDigit);

        if(numberDigit > BiggestNumber)
            BiggestNumber = numberDigit;
    }

    printf("Maior Número digitado: %d\n", BiggestNumber);

    return 0;
}