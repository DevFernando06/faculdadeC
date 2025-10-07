#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    const int year = 2018;
    int yearPerson, days = 0;

    printf("Em que ano você nasceu? ");
    scanf("%d", &yearPerson);

    for (yearPerson; yearPerson <= year ; yearPerson++){
        if((yearPerson % 4 == 0 && yearPerson % 100 != 0) || yearPerson % 400 == 0)
            days += 366;
         else
            days += 365;
    }

    printf("Você viveu: %d dias", days);

}