#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int note;
    char comment[255];
    printf("Digite uma nota de 1 a 3 pelo serviço: \n");
    scanf("%d", &note);

    switch (note)
    {
    case 1:
        printf("Desculpe pelo serviço, deixe uma mensagem informando em que podemos melhorar na próxima\n");
        printf("Comentário: ");
        scanf("%s", &comment);
        break;
    case 2:
        printf("Obrigado. Deseja deixar alguma sugestão para nosso serviço ficar perfeito (s/n)?");
        scanf("%s", comment);
        printf("%s", comment);
        if(strcmp(comment, "s") == 0){
            printf("Comentário: ");
            scanf("%s", &comment);
        }
        break;
    case 3: 
        printf("Muito obrigado e até a próxima!");
        break;
    default:
        printf("Nota inválida!");
    }
}