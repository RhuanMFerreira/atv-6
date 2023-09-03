#include <Stdio.h>

main() {
    int Prato, Sobremesa, Bebida;
    float TotalCalorias = 0;

    printf("Escolha o Prato(1 - Vegetariano, 2 - Peixe, 3 - Frango, 4 - Carne):");
    scanf("%d", &Prato);

    printf("Escolha a Sobremesa(1 - Abacaxi, 2 - Sorvete Diet, 3 - Mouse diet, 4 - Mouse chocolate):");
    scanf("%d", &Sobremesa);

    printf("Escolha a bebida(1 - Cha, 2 - Suco de Laranja, 3 - Suco de Melao, 4 - Refrigerante Diet):");
    scanf("%d", &Bebida);

    switch (Prato){
        case 1:
         TotalCalorias += 180;
         break;

        case 2:
         TotalCalorias += 230;
         break;

        case 3:
         TotalCalorias += 250;
         break;

        case 4:
         TotalCalorias += 350;
         break;

        default:
         printf("Prato Invalido.\n");
         return 1;
    }

    switch (Sobremesa){
        case 1:
         TotalCalorias += 75;
         break;

        case 2:
         TotalCalorias += 110;
         break;

        case 3:
         TotalCalorias += 170;
         break;

        case 4:
         TotalCalorias += 200;
         break;

        default:
         printf("Sobremesa Invalida.\n");
         return 1;

    }

    switch (Bebida){
        case 1:
         TotalCalorias += 20;
         break;

        case 2:
         TotalCalorias += 70;
         break;
        case 3:
        
         TotalCalorias += 100;
         break;

        case 4:
         TotalCalorias += 65;
         break;

        default:
         printf("Bebida Invalida.\n");
         return 1;

    }

    printf("\n---------Suas Calorias----------\n");

    printf("Total de Calorias da Refeicao e: %.2f calorias\n", TotalCalorias);
}