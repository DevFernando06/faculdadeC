    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    int main()
    {
        setlocale(LC_ALL, "Portuguese");

        float value, priceParc, interest;
        int parc;

        printf("Digite o preço do produto: ");
        scanf("%f", &value);
        printf("Digite a quantidade de parcelas: ");
        scanf("%d", &parc);

        priceParc = value / parc;

        for (int i = 1; i <= parc; i++)
        {
            interest = ((i - 1) * 0.02) * priceParc;

            printf("Parcela %d - %.2f \n", i, priceParc + interest);
        }
    }