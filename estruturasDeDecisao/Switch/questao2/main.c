#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nivel;
    printf("Digite o nível de usuário para saber suas permissões: \n");
    printf("Admin(a) \n Moderador(m) \n Usuário comum(c): \n");
    scanf("%c", &nivel);

    switch (nivel)
    {
        case 'a':
            printf("Criar usuário \n");
        case 'm':
            printf("Criar postagem \n");
        case 'c':
            printf("Adicionar Comentário. \n");
            break;

        default:
            printf("Nível inválido");

    }

    return 0;
}
