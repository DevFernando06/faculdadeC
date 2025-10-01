#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char letter;

    printf("Digite uma letra\n");
    scanf("%c", &letter);

    switch(letter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vogal");
            break;
        default:
            printf("Consoante");
    }
    return 0;
}